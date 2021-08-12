#include <iostream>
#include <algorithm>

std::string DNAtoRNA(std::string dna) {
/*  for(char &ch : dna) {
		if(ch == 'T') {
			ch = 'U';
		}
    } */
	std::replace( dna.begin(), dna.end(), 'T', 'U');
	return dna;
}

int main(int argc, char *argv[]) {
	std::cout << DNAtoRNA("GCAT"); // GCAU
	return 0;
}
