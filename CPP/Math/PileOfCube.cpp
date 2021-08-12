#include <iostream>
#include <cmath>
#include <numeric>

class ASum
{
  public:
  static long long findNb(long long m);
};

long long ASum::findNb(long long m) {
	long long i = 0;
	long long sum = 0;
	while ( sum < m ) {
		sum += pow(++i, 3);
		if ( sum == m) return i;
	}
	return i;
}

int main(int argc, char *argv[])
{
	std::cout << ASum::findNb(1071225) << std::endl; // ----> 45
    std::cout << ASum::findNb(4183059834009); // ----> 2022
	return 0;
}
