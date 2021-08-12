#include <unordered_map>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <iterator>
#include <algorithm>

using namespace std;

typedef std::unordered_map<std::string, double> stringdblmap;
class Tour
{
public:
    static int tour(std::vector<std::string> &arrFriends,
			std::vector<std::vector<std::string>> &ftwns,
			stringdblmap &h);
};

int Tour::tour(std::vector<std::string> &arrFriends,
		std::vector<std::vector<std::string>> &ftwns,
		stringdblmap &h) {
	vector<string> v;
	for ( auto const& i : arrFriends) {
		for ( auto const& j : ftwns) {
			if ( i == j[0] ) v.push_back(j[1]);
		}
	}

	float sum = h[v[0]];
	unsigned int i = 1;
	for (; i < v.size(); ++i) {
		// if ( i > ftwns.size()-1) break;
		float n1 = h[v[i-1]];
		float n2 = h[v[i]];
		float result = sqrt(n2*n2 - n1*n1);
		sum += result;
	}

	sum += h[v[i-1]];
	cout << sum << endl;

	return (int)sum;
}

/* #include <unordered_map> */
/* #include <vector> */
/* #include <cmath> */

/* using namespace std; */

/* typedef unordered_map<string, double> stringdblmap; */
/* class Tour */
/* { */
/* public: */
/*     static int tour(vector<string> &arrFriends, vector<vector<string>> &ftwns, stringdblmap &h){ */
/*          unordered_map<string,string> M; */
/*         for(const auto& x : ftwns) */
/*             M[x[0]] = x[1]; */
/*         double t = 0, ans = 0; */
/*         for(const auto& x : arrFriends){ */
/*             if(M.find(x) == M.end()) continue; */
/*             double d = h[M[x]]; */
/*             ans += sqrt(d*d - t*t); */
/*             t = d; */
/*         } */
/*         return int(ans + t); */
/*     } */
/* }; */
