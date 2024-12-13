#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int main(){
	int arr[N], size, pos;
	srand(time(NULL));
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	printf("ARRAY: \n");
	for(int i = 0; i < size; ++i){
		arr[i] = 50 + ((rand() % 50) + 1);
		printf("%d ", arr[i]);
	}
	printf("Enter the position of the element to be deleted: ");
	scanf("%d", &pos);
	for(int i = pos - 1; i < size - 1; ++i){
		arr[i] = arr[i + 1];
	}
       	--size;	
	for(int i = 0; i < size; ++i){
	      	printf("%d ", arr[i]);
	}
	return 0;
}
