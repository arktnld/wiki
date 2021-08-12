#include <iostream>

long long rowSumOddNumbers(unsigned n){
	if (n == 1) return 1;
	int odd = n*(n-1)+1;
	unsigned sum = 0;
	for (unsigned i = 1; i <= n; ++i) {
		sum += odd;
		odd += 2;
	}
	return sum;
//  return n*n*n; NO WAY!!!
}

int main(int argc, char *argv[])
{
	std::cout << rowSumOddNumbers(1) << std::endl; // 1
	std::cout << rowSumOddNumbers(2) << std::endl; // 3 + 5 = 8
	std::cout << rowSumOddNumbers(3) << std::endl; // 27
	std::cout << rowSumOddNumbers(42); // 74088
	return 0;
}
