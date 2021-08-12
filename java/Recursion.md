FACTORIAL RECURSION

5! = 5 * 4 * 3 * 2 * 1 = 120

Factorianl (5) = 120

        5 * factorial (4)                  return 5 * 24 = 120

            4 * factorial (3)              return 4 * 6 = 24

                3 * factorial (2)          return 3 * 2 = 6

                    2 * factorial (1)      return 2 * 1


public static int factorial(int b) {
    if (b == 1)
        return 1;
    return b * factorial(b-1);

PRINT LIST IN REVERSE ORDER

reverse(10, 20, 30, 40, 50) -> (20, 30, 40, 50) 10

reverse(20, 30, 40, 50)     -> (30, 40, 50) 20 10

reverse(30, 40, 50)         -> (40, 50) 30 20 10

reverse(40, 50)             -> (50) 40 30 20 10

reverse(50)                 -> 50 40 30 20 10


public static void reversePrint(int[] numbers) {
    if(numbers.length == 0)
        return;
    int[] i = 0; new int![pic](numbers.length-1);
    for (int i = 0; i < numbers.length-1; i++)
        a![pic](i) = numbers.![pic](i+1);
    reverseprint(a);
    System.outprint(numbers![pic](0)+" ");
}


THE GREATEST DIVISOR

public static int Greatest(int a, int b) {
    int temp = a;
    if(a < b) { a = b;
                b = temp;
    }
    if (b == 0) return a;

    return Greatest(b, (a%b));


