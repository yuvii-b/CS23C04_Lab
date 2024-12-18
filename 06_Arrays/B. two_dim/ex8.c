#include <stdio.h>
#define ROWS 4
#define COLS 3

int main(){
	int marks[ROWS][COLS];
	for(int i = 0; i < ROWS; ++i){
		printf("Student %d:\n", i + 1);
		for(int j = 0; j < COLS; ++j){
			printf("Mark %d: ", j + 1);
			scanf("%d", &marks[i][j]);
		}
		printf("\n");
	}
	printf("MARKS TABLE: \n");
	for(int i = 0; i < ROWS; ++i){
		for(int j = 0; j < COLS; ++j){
			printf("%d ", marks[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i < ROWS; ++i){
		int total = 0;
		for(int j = 0; j < COLS; ++j){
			total += marks[i][j];
		}
		printf("Marks of student %d: %d \n", i + 1, total);
	} 
	return 0;
}
