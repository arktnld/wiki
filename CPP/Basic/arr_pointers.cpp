#include <iostream>

int main(int argc, char *argv[])
{
	int ia[5];
	ia[0] = 1;
	int *ip = ia;

	*ip = 2; // point to index 0 of ia.
	std::cout << ia[0] << std::endl;
	std::cout << *ip << std::endl;

	++ip; // Change pointer to index 1.
	*ip = 3;
	std::cout << ia[1] << std::endl;
	std::cout << *ip << std::endl;

	++ip; // Change pointer to index 2.
	*(++ip) = 4; // Change to index 3 and assign value 4.
	std::cout << ia[3] << std::endl;
	std::cout << *ip << std::endl;

	char s[] = "string";

	// Create a pointer to cicle into string array.
	for (char * cp = s;  *cp; ++cp) {
		std::cout << *cp << std::endl;
	}

	return 0;
}
