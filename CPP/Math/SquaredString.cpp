#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>

class Opstrings
{
	public:
		static std::string vertMirror(const std::string &strng);
		static std::string horMirror(const std::string &strng);
		// your high order function oper
		//... oper(...);
		static std::string oper(std::string (*func)(const std::string &), const std::string &s );
};

std::vector<std::string> str2vec(const std::string &strng) {

	std::string str = strng, word;
	std::replace( str.begin(), str.end(), '\n', ' '); // replace all 'x' to 'y'
	std::stringstream ss{str};
	std::vector<std::string> vec;
	while( ss >> word ) {
		vec.push_back(word);
	}
	return vec;
}

std::string Opstrings::horMirror(const std::string &strng) {

	std::vector<std::string> vec = str2vec(strng);
	std::reverse(std::begin(vec), std::end(vec));

	std::string str;
	std::for_each(vec.begin(), vec.end(), [&](const std::string &piece){ str +=
			piece + (piece != vec[vec.size()-1] ? "\n" : ""); }
			);

	return str;
}

std::string Opstrings::vertMirror(const std::string &strng) {

	std::vector<std::string> vec = str2vec(strng);

	std::string str;

	for ( std::string s : vec) {

		std::string tmp = s;
		std::reverse(s.begin(), s.end());

		if (tmp != vec[vec.size()-1] ) {
			str += s + '\n';
		} else {
			str += s;
		}
	}

	return str;
}

std::string Opstrings::oper( std::string (*func)(const std::string &), const std::string &s) {
	return func(s);
}

