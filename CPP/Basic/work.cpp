#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	string inputString;
	cout << "Typa a string: ";
	/* cin >> inputString; */
	getline(cin, inputString);
	cout << "Input String is: " << inputString << endl;
	return 0;
}
