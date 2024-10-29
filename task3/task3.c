#include <stdio.h>
// Functions' declarations
int intAdd(int, int);
float floatAdd(float, float);
float circleArea(float);
float rectArea(float, float);
int factorial(int);
// main function
int main() {
	int A = 2, B = 3;
	float X = 2.1, Y = 2.9;
	float radius = 2.5;
	float length = 3, width = 5;
	int number = 4;

	printf("The result of adding the two integers %d and %d is %d\n", A, B, intAdd(A, B));
	printf("The result of adding the two floats %.2f and %.2f is %.2f\n", X, Y, floatAdd(A, B));
	printf("The area of a circle with the radius = %.2f is %.2f\n", radius, circleArea(radius));
	printf("The area of a rectangle with the length = %.2f and width = %.2f is %.2f\n", length, width, rectArea(length, width));
	printf("The factorial of %d is %d\n", number, factorial(number));
        return 0;
}
// Functions' definitions
int intAdd(int a, int b) {
	return a + b;
}

float floatAdd(float a, float b) {
	return a + b;
}

float circleArea(float r) {
	const float PI = 3.14159265359;
	return PI*r*r;
}

float rectArea(float l, float w) {
	return l*w;
}

int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n*factorial(n - 1);
}
