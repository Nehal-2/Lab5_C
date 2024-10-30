#include <stdio.h>

int main() {
        char chA = '1';
        int intA = 1;
        short shortA = 1;
        long longA = 1;
	char *p;

	// Print the size to determine the architecture
        printf("Size of a character variable: %lu bytes.\n", sizeof(chA));
	printf("Size of an integer variable: %lu bytes.\n", sizeof(intA));
	printf("Size of a short variable: %lu bytes.\n", sizeof(shortA));
	printf("Size of a long variable: %lu bytes.\n", sizeof(longA));	
	
	// Print the address (to verify the size) and value of the first byte to check Endianness
	p = &chA;
	printf("\nAddress of the first byte of the character is %p\n", p);
	printf("The value of the variable is %d\n", *p);// will print the ASCII of '1' (49)

	p = (char*)&intA;
        printf("Address of the first byte of the integer is %p\n", p);
	printf("The value of the variable is %d\n", *p);
	
	p = (char*)&shortA;
        printf("Address of the first byte of the short is %p\n", p);
	printf("The value of the variable is %d\n", *p);
	
	p = (char*)&longA;
        printf("Address of the first byte of the long is %p\n", p);
	printf("The value of the variable is %d\n", *p);
		
	return 0;
}
