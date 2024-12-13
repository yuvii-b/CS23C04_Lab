#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(){
	int matrix[ROWS][COLS] = {{0}, {0}, {0}}, transpose[ROWS][COLS] = {{0}, {0}, {0}};
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("Matrix[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);	
		}
	}
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			transpose[i][j] = matrix[j][i];
		}
	}
	printf("TRANSPOSE MATRIX: \n");
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}

	return 0;
}
