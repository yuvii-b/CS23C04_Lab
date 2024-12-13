#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 25

int main(){
	int arr[SIZE], n, count = 0;
	srand(time(NULL));
	for(int i = 0; i < SIZE; ++i){
		arr[i] = (rand() % (10)) + 1;
	}
	for(int i = 0; i < SIZE; ++i){
		printf("%d ", arr[i]);
	}
	printf("\nGuess a number from 1 to 10: ");
	scanf("%d", &n);
	for(int i = 0; i < SIZE; ++i){
		if(arr[i] == n){
			++count;
		    printf("position: %d\n", i + 1);
		}
	}
	if(count == 0)
		printf("The entered number %d is not present in the array", n);
	else 
		printf("The entered number %d occured %d times in the array", n, count);
	return 0;
}
