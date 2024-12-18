#include <stdio.h>

int main(){
	int number, sum = 0;
	printf("Enter a number to check for perfect number: ");
	scanf("%d", &number);
	for(int i = 1; i < number; ++i){
		if(number % i == 0) sum += i;
	}
	if(sum == number) printf("%d is a perfect number\n", number);
	else printf("%d is not a perfect number\n", number);
	return 0;
}
