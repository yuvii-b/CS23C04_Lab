#include <stdio.h>

int main(){
	int r1, c1, r2, c2, isIdentical = 1;
	printf("Enter order for matrix 1: ");
	scanf("%d %d", &r1, &c1);
	printf("Matrix1: \n");
	int m1[r1][c1];
	for(int i = 0; i < r1; ++i){
		for(int j = 0; j < c1; ++j){
			printf("M1[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &m1[i][j]);
		}
	}
	printf("Enter order for matrix 2: ");
	scanf("%d %d", &r2, &c2);
	printf("Matrix2: \n");
	int m2[r2][c2];
	for(int i = 0; i < r2; ++i){
		for(int j = 0; j < c2; ++j){
			printf("M2[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &m2[i][j]);
		}
	}
	if(r1 == r2 && c1 == c2){
		for(int i = 0; i < r1; ++i){
			for(int j = 0; j < c1; ++j){
				if(!(m1[i][j] == m2[i][j])){
						isIdentical = 0;
						break;
				}
			}
			if(!isIdentical) break;
		}
		if(isIdentical) printf("Identical");
		else printf("The two matrices are not identical");
	}else{
		printf("The two matrices are not identical");
	}
	return 0;
}
