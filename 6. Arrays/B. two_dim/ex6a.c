#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(){
	int matrix_a[ROWS][COLS], matrix_b[ROWS][COLS];
	printf("Matrix A: \n");
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
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
	printf("Matrix A - Matrix B: \n");
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("%d ", matrix_a[i][j] - matrix_b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
