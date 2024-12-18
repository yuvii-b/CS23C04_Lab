 #include <stdio.h>
#include <math.h>

int main(){
	long int dec, bin, temp, i = 0;
	printf("Enter a decimal number: ");
	scanf("%ld", &dec);
	temp = dec;
	do{
		int l = temp % 2;
		bin += l * pow(10, i);
		++i;
		temp /= 2;
	}while(temp!=0);
	printf("%ld in binary is %d\n", dec, bin);
	return 0;
}
