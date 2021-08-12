#include <iostream>
#include <vector>
// #include <algorithm>
#include <numeric>

using namespace std;

int count_sheep(vector<bool> array)
{
	int n = 0;
	for ( bool b : array)  if (b) n++;
	return n;
	// return std::count(array.begin(), array.end(), true);
	// return accumulate(arr.begin(), arr.end(), 0);
}

int main(int argc, char *argv[])
{
	vector<bool> array1 = { true,  true,  true,  false,
           true,  true,  true,  true ,
           true,  false, true,  false,
           true,  false, false, true ,
           true,  true,  true,  true ,
           false, false, true,  true };
	std::cout << count_sheep(array1);
	return 0;
}

