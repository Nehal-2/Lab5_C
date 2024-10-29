#include <stdio.h>

int main() {
	char charArray[5];
	int intArray[5];
	short shortArray[5];
	double doubleArray[5];

	printf("Character Array:\n");
	for (int i = 0; i < 5; i++) {
		printf("%p", &charArray[i]);
		printf("\n");
	}
	printf("\n");
	printf("Integer Array:\n");
        for (int i = 0; i < 5; i++) {
                printf("%p", &intArray[i]);
                printf("\n");
        }
	printf("\n");
	printf("Short Array:\n");
        for (int i = 0; i < 5; i++) {
                printf("%p", &shortArray[i]);
                printf("\n");
        }
	printf("\n");
	printf("Double Array:\n");
        for (int i = 0; i < 5; i++) {
                printf("%p", &doubleArray[i]);
                printf("\n");
        }
        return 0;
}
