#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool is_square(int n)
{
	return sqrt(n) - ((int)sqrt(n)) == 0 ? true : false;
	// return fmod(sqrt(n),1.0) == 0;
}

int main(int argc, char *argv[])
{

     cout << is_square(-1); // Equals(false);
     cout << is_square(0);  // Equals(true);
     cout << is_square(3);  // Equals(false);
     cout << is_square(4);  // Equals(true);
     cout << is_square(25); // Equals(true);
     cout << is_square(26); // Equals(false);
	return 0;
}
