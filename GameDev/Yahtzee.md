:yahtzee:

# Yahtzee Prototype Game
    - Make a game called FiveDice
    - Construct a pixel game engine with 640x480
    - Learn how to draw a dice and roll
    - Make code to check the rules of the game

# Source Code
    [FilveDice](FiveDice.cpp)

# Algorithm Logic

    1. Use an array/vector to store 5 dices initializing a list with the dices
        vRolled = {1, 2, 3, 4, 5}

    2. Create a DrawDie routine with this atributes for the dice:

        - position(vPos) {10, 10}
        - face(nFace)
        - size(vSize){64, 64}
        - color dice(colFace) DARK RED
        - color spots(colSpot) White
        ```cpp
        void DrawDie(const olc::vi2d& vPos,
                        const uint8_t nFace,
                        const olc::vi2d& vSize = { 64, 64 },
                        const olc::Pixel colFace = olc::DARK_RED,
                        const olc::Pixel colSpot = olc::WHITE)
	```
    3. Every time the screen updates clear the screen to dark green(cassino green)

    4. Draw five dices give the location on screen

        1 {10, 10}
        2 {80, 10}
        3 {150, 10}
        4 {220, 10}
        5 {290, 10}

    5. How to draw faces of dice:

    ```
        +-------+
        | ●     |--T
        |       |--M     2 = TL, BR
        |     ● |--B
        +-------+-       if( face == 2)
          | | |              drawdie(TL)
          L M R              drawdie(BR)
                         endif
    ```

    6. Position of the spots relative to the size of the face:

    ```cpp
    nColL = vSize.x * 0.25  // Column Left
    nColM = vSize.x * 0.5   // Column Middle
    nColR = vSize.x * 0.75  // Column Right

    nRowT = vSize.y * 0.25  // Row Top
    nRowM = vSize.y * 0.5   // Row Middle
    nRowB = vSize.y * 0.75  // Row Botton

    NRad = nColL * 0.4 // radius scale the Spot Size
    ```

    7. Use a function of your language like FillCircle to draw the background and dices:

    ```cpp
        if (nFace & 1) {
                FillCircle(vPos + olc::vi2d(nColM, nRowM), nRad, colSpot);
            }

            if (nFace > 1) {
                FillCircle(vPos + olc::vi2d(nColR, nRowB), nRad, colSpot);
                FillCircle(vPos + olc::vi2d(nColL, nRowT), nRad, colSpot);
            }

            if (nFace > 3) {
                FillCircle(vPos + olc::vi2d(nColR, nRowT), nRad, colSpot);
                FillCircle(vPos + olc::vi2d(nColL, nRowB), nRad, colSpot);
            }

            if (nFace == 6) {
                FillCircle(vPos + olc::vi2d(nColL, nRowM), nRad, colSpot);
                FillCircle(vPos + olc::vi2d(nColR, nRowM), nRad, colSpot);
        }
    ```

    8. Press Espace to change the numbers of the dices.

    ```cpp
        rand() % 6 + 1 // on each dice
        // Rolling each dice separated
        vRolled = {
            uint8_t(rand() % 6 + 1),
            uint8_t(rand() % 6 + 1),
            uint8_t(rand() % 6 + 1),
            uint8_t(rand() % 6 + 1),
            uint8_t(rand() % 6 + 1)
        };

        // try to use ´transform´ function to roll all dices
        std::transform(
            vRolled.begin(),
            vRolled.end(),
            vRolled.begin(),
            [](uint8_t n) { return rand() % 6 + 1; }
        );

        // Or try tu use `generate`function or another approach
        std::generate(
		  		vRolled.begin(),
		  		vRolled.end(),
		  		[]() { return rand() % 6 + 1; }
        );
    ```

    9. Sort the dices to make easy for read values

    ```cpp
		std::sort(vRolled.begin(), vRolled.end());
    ```

    10. Score all the rolled dices

    ```cpp
        // The first part of scoring is simple
		int nScore_AllDice = std::accumulate(vRolled.begin(), vRolled.end(), 0); // value of all the dices
		int nScore_CountOnes = std::count(vRolled.begin(), vRolled.end(), 1) * 1; // Count all the ones
		int nScore_CountTwos = std::count(vRolled.begin(), vRolled.end(), 2) * 2;
		int nScore_CountThrees = std::count(vRolled.begin(), vRolled.end(), 3) * 3;
		int nScore_CountFours = std::count(vRolled.begin(), vRolled.end(), 4) * 4;
		int nScore_CountFives = std::count(vRolled.begin(), vRolled.end(), 5) * 5;
		int nScore_CountSixes = std::count(vRolled.begin(), vRolled.end(), 6) * 6;

        {"Chance          : ", std::accumulate(vRolled.begin(), vRolled.end(), 0)},
        {"Total Ones      : ", std::count(vRolled.begin(), vRolled.end(), 1) * 1},
        {"Total Twos      : ", std::count(vRolled.begin(), vRolled.end(), 2) * 2},
        {"Total Threes    : ", std::count(vRolled.begin(), vRolled.end(), 3) * 3},
        {"Total Fours     : ", std::count(vRolled.begin(), vRolled.end(), 4) * 4},
        {"Total Fives     : ", std::count(vRolled.begin(), vRolled.end(), 5) * 5},
        {"Total Sixes     : ", std::count(vRolled.begin(), vRolled.end(), 6) * 6},

        // The second score logic is more complex
		int nScore_FiveOfAKind = 0; // nnnnn - Yahtzee
		int nScore_FourOfAKind = 0; // nnnn?, ?nnnn
        int nScore_ThreeOfAKind = 0; // nnn??, ?nnn?, ??nnn
		int nScore_SmallStraight = 0; // 1234?, ?2345, 2345?, ?3456
		int nScore_LargeStraight = 0; // 12345, 23456
		int nScore_FullHouse = 0; // nnn?? & ???nn, nn??? & ??nnn

        auto Match = [&vRolled = vRolled](const std::vector<std::string>& vPatterns) -> bool
            {
                // nnnnn                        - Yahtzee
                // nnnn?, ?nnnn                 - four of a kind
                // nnn??, ?nnn?, ??nnn          - three of a kind
                // 1234?, ?2345, 2345?, ?3456   - Small Straight
                // 12345, 23456                 - Large Straight
                // nnn?? & ???nn, nn??? & ??nnn - Full House

                bool bResult = false;

                for (const auto& sPattern : vPatterns)
                {

                    bool bMatch = true;
                    uint8_t n = 0;

                    for (size_t idx = 0; idx < 5; idx++)
                    {
                        if (sPattern![pic](idx) == 'n')
                        {
                            if (n == 0)
                            {
                                n = vRolled![pic](idx);
                            }
                            else
                            {
                                bMatch &= (vRolled![pic](idx) == n);
                            }
                        }
                        else if (sPattern![pic](idx) == '?')
                        {
                            bMatch &= true;
                        }
                        else // is Face Value
                        {
                            bMatch &= ((sPattern![pic](idx) - '0') == vRolled![pic](idx));
                        }

                    }

                    bResult |= bMatch;
                }
                return bResult;
            };


        {"Three Of A Kind : ", (Match({"nnn??", "?nnn?", "??nnn"})) ? (3 * vRolled![pic](2))                                 : 0},
        {"Four Of A Kind  : ", (Match({"nnnn?", "?nnnn"})) ? (4 * vRolled![pic](2))                                          : 0},
        {"Full House      : ", ((Match({"nnn??"}) && Match({"???nn"})) || (Match({"??nnn"}) && Match({"nn???"}))) ? 25 : 0},
        {"Small Straight  : ", (Match({"1234?", "2345?", "?3456", "?2345"}))                                      ? 30 : 0},
        {"Large Straight  : ", (Match({"12345", "23456"}))                                                        ? 40 : 0},
        {"Five Of A Kind  : ", (Match({"nnnnn"}))                                                                 ? 50 : 0},
    ```

