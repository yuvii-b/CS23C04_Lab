#include <stdio.h>
#define SIZE 8

int main(){
	int x[SIZE] = {1, 0, 3, 0, 5, 0, 7, 0};
	for(int i = 0; i <= SIZE; ++i){
		if(x[i] == 0)
			x[i] = x[(i+1) % SIZE];
	}
	for(int i = 0; i < SIZE; ++i){
		printf("%d ", x[i]);
	}
}
