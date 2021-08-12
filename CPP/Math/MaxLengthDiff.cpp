#include <vector>
#include <string>
#include <iostream>

using namespace std;

class MaxDiffLength
{
public:
    static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2);
};

int MaxDiffLength::mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2) {

	int max = 0;
	if (a1.empty() || a2.empty()) return -1;
	for (string s1 : a1) {
		for (string s2 : a2) {
			double d1 = s1.length(), d2 = s2.length();
			int diff = abs(d1 - d2);
			if (diff > max) max = diff;
		}
	}
	return max;
}

int main(int argc, char *argv[])
{
	std::vector<std::string> s1 = {"hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"};
	std::vector<std::string> s2 = {"cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"};
	cout << MaxDiffLength::mxdiflg(s1, s2) << endl; // 13
	s1 = {"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh"};
	s2 = {"bbbaaayddqbbrrrv"};
	cout << MaxDiffLength::mxdiflg(s1, s2) << endl; // 10
	s1 = {};
	s2 = {"cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"};
	cout << MaxDiffLength::mxdiflg(s1, s2) << endl; // -1
	return 0;
}
