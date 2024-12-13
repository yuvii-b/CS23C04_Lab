#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(){
	int matrix[ROWS][COLS] = {{0}, {0}, {0}}, isIdentity = 1;
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("Matrix[%d][%d]", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	for(int i =0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			if(i == j){
				if(!matrix[i][j]){
					isIdentity = 0;
					break;
				}  
			}
			else{
				if(matrix[i][j]){
					isIdentity = 0;
					break;
				}
			}
		}
		if(!isIdentity) break;
	}
	if(isIdentity) printf("The given matrix is an identity matrix\n");
	else printf("The given matrix is not an indentity matrix\n");
	return 0;
}
