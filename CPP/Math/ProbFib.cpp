#include <vector>

using namespace std;

// Check if a product of two consecutive fibonacci
// numbers is iquals to the given number.
typedef unsigned long long ull;

class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod);
};

ull Fib(ull n) {
	if (n == 1 || n == 0) return n;
	return Fib(n-1) + Fib(n-2);
}

std::vector<ull> ProdFib::productFib(ull prod) {

	ull f1, f2, i = 1;
	while ( i < prod) {
		f1 = Fib(i), f2 = Fib(++i);
		if (f1 * f2 >= prod) break;
	}
	return  {f1, f2, (f1*f2 == prod)};
}
