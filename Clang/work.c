#include <stdio.h>

enum { max_string = 127 };
static char string[ max_string + 1 ] = "";

int main( int argc, char ** argv ) {
	printf("type a string : ");
	fgets(string, max_string, stdin);
	printf("output: %s\n", string);
}
