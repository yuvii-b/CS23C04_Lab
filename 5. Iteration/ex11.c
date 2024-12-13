#include <stdio.h>
#include <math.h>

int main(){
	long int bin, dec, temp, i = 0;
	printf("Enter a number in binary: ");
	scanf("%ld", &bin);
	temp = bin;
	do{
		int l = temp % 10;
		dec += l * pow(2, i);
		temp /= 10;
		++i;
	}while(temp!=0);
	printf("%ld in decimal is %ld", bin, dec);
	return 0;
}
