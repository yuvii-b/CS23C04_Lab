#include <stdio.h>
#define ROWS 4
#define COLS 4

int main(){
	int mat_a[ROWS][COLS] = {{8, 4, 3, 1}, {2, 6, 4, 9}, {3, 4, 7, 5}, {8, 6, 9, 1}}, mat_b[ROWS][COLS];
	printf("Array A: \n");
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("%d ", mat_a[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			mat_b[i][j] = mat_a[i][COLS - 1 - j];
		}
	}
	printf("Array B: \n");
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("%d ", mat_b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
