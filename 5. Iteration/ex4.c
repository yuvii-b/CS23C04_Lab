#include <stdio.h>

int main(){
	int num, product = 1;
	printf("Enter a number: ");
	scanf("%d", &num);
	int temp = num;
	while(temp != 0){
		int n = temp % 10;
		product *= n;
		temp /= 10;
	}
	printf("The product of individual digits of %d is %d\n", num, product);
	return 0;
}
