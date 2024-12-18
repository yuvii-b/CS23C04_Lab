#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(){
	int matrix_a[ROWS][COLS], matrix_b[ROWS][COLS], result[ROWS][COLS];
	printf("Matrix A: \n");
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j) {
			printf("MatrixA[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matrix_a[i][j]);
		}
	}	
	printf("Matrix B: \n");
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("MatrixB[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matrix_b[i][j]);
		}
	}
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < ROWS; ++j){
			result[i][j] = 0;
			for(int k = 0; k < ROWS; ++k){
				result[i][j] += matrix_a[i][k] * matrix_b[k][j];
			}
		}
	}
	printf("Matrix A * Matrix B: \n");
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
