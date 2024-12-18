#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main(){
	srand(time(NULL));
	int count[SIZE] = {0}, ballot[50], spoilt = 0;
	for(int i = 0; i < 50; ++i){
		ballot[i] = (rand() % 10) + 1;
		printf("%d ", ballot[i]);
		switch(ballot[i]){
			case 1:
				count[0]++;
				break;
			case 2:
				count[1]++;
				break;
			case 3:
				count[2]++;
				break;
			case 4:
				count[3]++;
				break;
			case 5:
				count[4]++;
				break;
			default:
				spoilt++;
		}
	}
	printf("\n");
	for(int i = 0; i < SIZE; ++i){
		printf("No of votes for candidate %d: %d\n", i + 1, count[i]);
	}
	printf("No of spoilt ballots: %d", spoilt);
	return 0;
}
