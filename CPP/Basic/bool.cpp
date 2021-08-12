#include <iostream>
#include <string>

using namespace std;

string bool_to_word(bool value) {
	return value == true ? "Yes" : "No";
	// return value ? "Yes" : "No";
}

int main(int argc, char *argv[]) {
    cout << bool_to_word(true);  // Equals("Yes");
    cout << bool_to_word(false); // Equals("No");
	return 0;
}
