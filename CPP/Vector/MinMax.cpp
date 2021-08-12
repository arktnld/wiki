#include <vector>
#include <iostream>
// #include <algorithm>
using namespace std;

int min(vector<int> list) {
	int min = 0;
	for(int & i : list) {
		if( i < min) min = i;
	}
	return min;
    // return *(min_element(list.begin(), list.end()));
}

int max(vector<int> list) {
	int max = 0;
	for(int & i : list) {
		if( i > max) max = i;
	}
	return max;
    // return *(max_element(list.begin(), list.end()));
}

int main() {
	cout << "Max is: " << max({4,6,2,1,9,63,-134,566}) << endl;
	cout << "Mix is: " << min({-52, 56, 30, 29, -54, 0, -110}) << endl;
	cout << "Max is: " << max({5}) << endl;
	cout << "Min is: " << min({42, 54, 65, 87, 0}) << endl;
}

