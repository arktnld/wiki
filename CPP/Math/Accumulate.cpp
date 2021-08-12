#include <iostream>
#include<vector>
#include <numeric>

using namespace std;

int main(int argc, char *argv[])
{
	vector<int> arr = {1, 2, 10};
	cout << accumulate(arr.begin(), arr.end(), 0); // 13
	return 0;
}
