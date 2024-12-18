#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int main(){
	int arr[N], size, data, pos;
	srand(time(NULL));
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	printf("ARRAY : \n");
	for(int i = 0; i < size; ++i){
		arr[i] = (rand() % 100) + 1;
		printf("%d ", arr[i]);
	}
	printf("\nEnter the new data to be inserted: ");
	scanf("%d", &data);
	printf("Enter the position of the new data: ");
	scanf("%d", &pos);
	size++;
	for(int i = size - 1; i >= pos; --i){
		arr[i] = arr[i-1];
	}
	arr[pos - 1] = data;
	for(int i = 0; i < size; ++i) printf("%d ", arr[i]);
	return 0;

}
