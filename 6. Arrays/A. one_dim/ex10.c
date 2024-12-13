#include <stdio.h>
#define SIZE 10

int main(){
	int arr[SIZE] = {7, 8, 1, 10, 9, 2, 3, 5, 4, 6};
	printf("UNSORTED ARRAY: \n");
	for(int i = 0; i < SIZE; ++i){
		printf("%d ", arr[i]);
	}
	for(int i = 0; i < SIZE; ++i){
		for(int j = 0; j < SIZE - i - 1; ++j){
			if(arr[j] > arr[j+1]){
				int temp = arr[j + 1];
			  	arr[j + 1] = arr[j];
				arr[j] = temp;	
			}	
		}
	}
	printf("\nSORTED ARRAY: \n");
	for(int i = 0; i < SIZE; ++i){
		printf("%d ", arr[i]);
	}
}
