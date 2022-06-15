#include <stdio.h>
#include <math.h>

// Do everything unsigned char/int
// add dynamic allocation
//unsigned int pack4chars2int(unsigned char a, unsigned char b, unsigned char c, unsigned char d) {
//	unsigned char array[] = { a,b,c,d };
//	unsigned int buffer = 0;
//	unsigned int mask = 1;
//
//	for (int i = 0; i < 32; i++) {
//		unsigned char temp;
//		
//		if (i >= 0 && i <= 7) temp = a & mask;
//		else if (i >= 8 && i <= 15) temp = b & mask;
//		else if (i >= 16 && i <= 23) temp = c & mask;
//		else if (i >= 24 && i <= 31) temp = d & mask;
//
//		buffer |= temp;
//		mask <<= 1;
//	}
//	return buffer;
//}
//int test1(char a) {
//	int buffer = 0, mask = 1;
//
//	for (int i = 0; i < 8; i++) {
//		buffer |= (a & mask);
//		mask <<= 1;
//	}
//	return buffer;
//}

int checkEvenParity(short int input) {
	int count = 0, mask = 1;
	for (int i = 0; i < 16; i++) {
		short int temp = input & mask;
		if (temp != 0) count++;
		mask <<= 1;
	}
	if (count % 2 == 0) return 1;
	else return 0;
}

int main() {
	int i = checkEvenParity(24), j = checkEvenParity(-14580);
	printf("24: %d\n-14580: %d", i, j);
}