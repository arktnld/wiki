#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class PrimeDecomp
{
public:
    static string factors(int lst);
};

string Decomp(int n) {
	ostringstream res;
	for (int i = 2; n > 1; ++i) {
		int cnt = 0;
		while (n % i == 0) { n /= i; cnt++; }
		if ( cnt == 1) { res << "(" << i << ")"; }
		else if ( cnt > 1) { res << "(" << i << "**" << cnt << ")"; }
	}
	return res.str();
}

string PrimeDecomp::factors(int lst) {
	return Decomp(lst);
}

int main(int argc, char *argv[])
{
    cout << PrimeDecomp::factors(2) << endl; // "(7919)")
    cout << PrimeDecomp::factors(3) << endl; // "(7919)")
    cout << PrimeDecomp::factors(7) << endl; // "(7919)")
    cout << PrimeDecomp::factors(7919) << endl; // "(7919)")
    cout << PrimeDecomp::factors(86240) << endl; // "(2**5)(5)(7**2)(11)"
	cout << PrimeDecomp::factors(7775460) << endl; // "(2**2)(3**3)(5)(7)(11**2)(17)");
	cout << PrimeDecomp::factors(571867014); // "(2**2)(3**3)(5)(7)(11**2)(17)");
	return 0;
}
