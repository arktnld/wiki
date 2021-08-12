#include <string>
#include <vector>
#include <iostream>
using namespace std;

std::string likes(const std::vector<std::string> &names) {

	switch(names.size()) {
		case 0:
			return "no one likes this\n";
		case 1:
			return names[0] + " likes this\n";
		case 2:
			return names[0] + " and " + names[1] + " likes this\n";
		case 3:
			return names [0] + ", " + names[1] + " and " + names[2] + " likes this\n";
	}
    return names [0] + ", " + names[1] + " and " +
		to_string(names.size() - 2) + " others like this\n";

}

int main(int argc, char *argv[])
{
		cout << likes({});                               // Equals("no one likes this"));
        cout << likes({"Peter"});                        // Equals("Peter likes this"));
        cout << likes({"Jacob", "Alex"});                // Equals("Jacob and Alex like this"));
        cout << likes({"Max", "John", "Mark"});          // Equals("Max, John and Mark like this"));
        cout << likes({"Alex", "Jacob", "Mark", "Max"}); // Equals("Alex, Jacob and 2 others like this")

	return 0;
}
