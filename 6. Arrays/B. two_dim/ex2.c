#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(){
	int matrix[ROWS][COLS] = {{0}, {0}, {0}}, p_sum = 0, above_sum = 0, product = 1;
	printf("Enter the elements of the matrix: \n");
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("Matrix[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			if(i == j) p_sum += matrix[i][j];
			else if(j != 0 && i != 2) above_sum += matrix[i][j];
			else if(j != 2 && i != 0) product *= matrix[i][j];
		}	
	}
	printf("Principal diagonal sum: %d\n", p_sum);
	printf("Above diagonal sum: %d\n", above_sum);
	printf("Below diagonal product: %d\n", product);
	return 0;
}
