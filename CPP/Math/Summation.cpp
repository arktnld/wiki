#include <iostream>

int summation(int num){
	if (num < 1) return 0;
	return num + summation(num - 1);
//  return num * (num + 1) / 2;
}

int main(int argc, char *argv[])
{
	std::cout << summation(2) << std::endl;
	std::cout << summation(8);
	return 0;
}
