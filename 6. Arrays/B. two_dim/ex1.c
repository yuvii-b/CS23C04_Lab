#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(){
	int sum = 0, matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, arr[ROWS * COLS] = {0}; 
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			arr[(3 * i) + j] = matrix[i][j];
		}
	}
	printf("1-D array: \n");
	for(int i = 0; i < ROWS * COLS; ++i){
		printf("%d ", arr[i]);
	}
	return 0;
}
