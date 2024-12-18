#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(){
	int mat[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, r1, r2;
	printf("Enter the row numbers to interchange(1/2/3): ");
	scanf("%d %d", &r1, &r2);
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i < ROWS; ++i){
		int temp = mat[r1 - 1][i];
		mat[r1 - 1][i] = mat[r2 - 1][i];
		mat[r2 - 1][i] = temp;	
	}
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
