#include <iostream>

int makeNegative(int num)
{
    return num > 0 ? num * -1 : num;
//  return num > 0 ? -num : num;
//  return -abs(num);
}

int main(int argc, char *argv[])
{
	std::cout << makeNegative(42); // -42
	std::cout << makeNegative(5); //  -5
	std::cout << makeNegative(0); //   0
	std::cout << makeNegative(-1); // -1
	return 0;
}
