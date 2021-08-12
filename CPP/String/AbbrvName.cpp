#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

string abbrevName(std::string name)
{
	istringstream ss{name};
	string word, abbrev;
	while (ss >> word) {
		abbrev = abbrev + word[0];
	}

	abbrev.insert(1, 1, '.');
    std::transform(abbrev.begin(), abbrev.end(),abbrev.begin(), ::toupper);
	return abbrev;

  /*std::string ret;
    ret.push_back(toupper(name[0]));
    ret.push_back('.');
    ret.push_back(toupper(name[name.find(' ') + 1] ));
    return ret;*/

//  return { toupper( name[0] ), '.', toupper( name[ name.find_last_of( ' ' ) + 1 ] ) } ;

}

int main(int argc, char *argv[])
{
	cout << abbrevName("Sam Harris") << std::endl; // Equals("S.H")
    cout << abbrevName("Patrick Feenan") << std::endl; // Equals("P.F")
    cout << abbrevName("Evan Cole") << std::endl; // Equals("E.C")
    cout << abbrevName("P Favuzzi") << std::endl; // Equals("P.F")
    cout << abbrevName("David Mendieta") << std::endl; // Equals("D.M"));
    cout << abbrevName("cleber gomes") << std::endl; // Equals("D.M"));
	return 0;
}
