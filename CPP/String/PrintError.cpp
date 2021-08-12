#include <iostream>
#include <string>
#include <algorithm>

class Printer
{
public:
    static std::string printerError(const std::string &s);
};

std::string Printer::printerError(const std::string &s) {
	int cnt = 0;
	for( char c : s) {
		if ( c > 'm' && c <= 'z')  {
			cnt++;
		}
	}
	return std::to_string(cnt) + "/" + std::to_string(s.length());
//  return std::to_string(count_if(s.begin(), s.end(), [](char c){ return c>'m';})) + "/" + std::to_string(s.size());
}

int main(int argc, char *argv[])
{
	std::cout << Printer::printerError("aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz") << std::endl; // "3/56"
	std::cout << Printer::printerError("kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz") << std::endl; // "6/60"
	std::cout << Printer::printerError("kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyzuuuuu"); // "11/65"
	return 0;
}

