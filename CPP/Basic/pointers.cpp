#include <iostream>

int main(int argc, char ** argv ) {
	int x = 1;
	int y = x;
	std::cout << y << std::endl;
	std::cout << x << std::endl;
	y = y + 2;
	x = x + 1;
	std::cout << y << std::endl;
	std::cout << x << std::endl;
	int *ip;
	ip = &x;
	std::cout << ip << std::endl;
	y = *ip;
	x = x + 1;
	std::cout << y << std::endl;
	std::cout << x << std::endl;
	y = y + 2;
	std::cout << y << std::endl;
	std::cout << x << std::endl;
}
