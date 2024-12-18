#include <stdio.h>

int main(){
	int number,n = 5, numbers[n], squares[n];
	printf("Enter a 5 digit number: ");
	scanf("%d", &number);
	for(int i = n - 1; i >= 0; --i){
		numbers[i] = number % 10;
		if(number != 0) number /= 10;
	}
	for(int i = 0; i < n; ++i){
		squares[i] = numbers[i] * numbers[i];
	}
	for(int i = 0; i < n; ++i){
		printf("%d", squares[i]);
	}
	printf("\n");
	return 0;
}
