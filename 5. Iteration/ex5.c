#include <stdio.h>
#include <math.h>

int main(){
	int num, temp, digits = 0, result = 0;
	printf("Enter a number to check for narcissistic number: ");
	scanf("%d", &num);
	temp = num;
	while(temp != 0){
		temp /= 10;
		++digits;
	}
	temp = num;
	while(temp != 0){
		int n = temp % 10;
		result += pow(n, digits);
		temp /= 10;
	}
	if(num == result) printf("%d is a narcissistic number\n", num);
	else printf("%d is not a narcissistic number\n", num);
	return 0;

}
