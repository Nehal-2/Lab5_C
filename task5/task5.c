#include <stdio.h>

void MatVecMultiply(int rows, int cols, int A[rows][cols], int x[cols], int y[rows]);

int main() {
        int rows, cols;

	printf("Enter the number of rows in matrix A: ");
	scanf("%d", &rows);
	printf("Enter the number of columns in matrix A: ");
	scanf("%d", &cols);

	int A[rows][cols], x[cols], y[rows];

	printf("Enter the elements of matrix A (%dx%d): \n", rows, cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	printf("Enter the elements of vector x (size %d): \n", cols);
	for (int i = 0; i < cols; i++) {
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}

	MatVecMultiply(rows, cols, A, x, y);

	printf("Resulting y vector (size: %d):\n", rows);
	for (int i = 0; i < rows; i++) {
		printf("y[%d] = %d\n", i, y[i]);
	}
        
	return 0;
}

void MatVecMultiply(int rows, int cols, int A[rows][cols], int x[cols], int y[rows]) {
	for (int i = 0; i < rows; i++) {
		y[i] = 0;
		for (int j = 0; j < cols; j++) {
			y[i] += A[i][j]*x[j];
		}
	}
}
