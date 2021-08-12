#include <vector>
#include <iostream>

using namespace std;

std::vector<int> xbonacci(std::vector<int> signature, int n)
{
	if (n == 0) return {};

	int x = signature.size();
	if ( x > n ) {
		signature.resize(n);
		return signature;
	}
	for (int i = 0; i < n-x; i++) {
		int sum = 0;
		for (int j = i; j < x+i; j++) {
			sum += signature[j];
		}
		signature.push_back(sum);
	}
	return signature;
}

int main(int argc, char *argv[])
{
	vector<int> arr1 = xbonacci({0, 1}, 10); // {0,1,1,2,3,5,8,13,21,34};
	for ( int a : arr1 ) {
		cout << a;
		cout << " ";
	}
	cout << endl;
	vector<int> arr2 = xbonacci({1, 1}, 10); // {1,1,2,3,5,8,13,21,34,55};
	for ( int a : arr2 ) {
		cout << a;
		cout << " ";
	}
	cout << endl;
	vector<int> arr3 = xbonacci({0,0,0,0,1}, 10); // {0,0,0,0,1,1,2,4,8,16};
	for ( int a : arr3 ) {
		cout << a;
		cout << " ";
	}
	cout << endl;
	vector<int> arr4 = xbonacci({1,0,0,0,0,0,1}, 10); // {1,0,0,0,0,0,1,2,3,6};
	for ( int a : arr4 ) {
		cout << a;
		cout << " ";
	}
	cout << endl;
	vector<int> arr5 = xbonacci({1,0,0,0,0,0,0,0,0,0}, 20); // {1,0,0,0,0,0,0,0,0,0,1,1,2,4,8,16,32,64,128,256};
	for ( int a : arr5 ) {
		cout << a;
		cout << " ";
	}
	cout << endl;
	vector<int> arr6 = xbonacci({1,2,3,4,5,6,7,8,9,0}, 9); // {1,2,3,4,5,6,7,8,9};
	for ( int a : arr6 ) {
		cout << a;
		cout << " ";
	}
	cout << endl;
	vector<int> arr7 = xbonacci({1,2,3,4,5,6,7,8,9,0}, 0); // {};
	for ( int a : arr7 ) {
		cout << a;
		cout << " ";
	}
	cout << endl;
	return 0;
}
