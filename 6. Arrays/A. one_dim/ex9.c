#include <stdio.h>

int main(){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int b[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int temp;
	// original arrays
	printf("Array A: \n");
	for(int i = 0; i < 10; ++i){
		printf("%d ", a[i]);
	}
	printf("\nArray B: \n");
	for(int i = 0; i < 10; ++i){
		printf("%d ", b[i]);
	}
	for(int i = 0; i < 10; ++i){
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	// swapped arrays
	printf("\nAfter Swapping: \n");
	printf("Array A: \n");
	for(int i = 0; i < 10; ++i) {
		printf("%d ", a[i]);
	}
	printf("\nArray B: \n");
	for(int i = 0; i < 10; ++i){
		 printf("%d ", b[i]);
	}			
	return 0;	
}
