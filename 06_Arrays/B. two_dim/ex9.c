#include <stdio.h>
#define ROWS 10
#define COLS 4

int main(){
	float men[ROWS][COLS];
	int count = 0;
	printf("Enter the height, weight, age and chest(in order) in cm for each man: \n");
	for(int i = 0; i < ROWS; ++i){
		printf("Man %d: \n", i + 1);
		for(int j = 0; j < COLS; ++j){
			scanf("%f", &men[i][j]);		
		}
		printf("\n");
	}
	printf("PARAMETERS OF MEN: \n");
	for(int i = 0; i < ROWS; ++i){
		printf("Man %d: ", i + 1);
		for(int j = 0; j < COLS; ++j){
			printf("%d ", men[i][j]);
		}
		printf("\n");
	}
	//check
	for(int i = 0; i < ROWS; ++i){
		if((men[i][0] > 158.496 && men[i][0] < 170.688) && (men[i][1] > 45 && men[i][1] <= 65 && (men[i][2] > 18 && men[i][2] < 25) && men[i][3] > 45)
			++count;
	}
	printf("The number of men who satisfy all the conditions: %d", count);
	return 0;
}
