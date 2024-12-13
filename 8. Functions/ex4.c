#include <stdio.h>

int gcd(int, int);
int lcm(int, int, int);

int main(){
	int n1, n2;
	printf("Enter two number to find its GCD and LCM: ");
	scanf("%d %d", &n1, &n2);
	int GCD = gcd(n1, n2);
	int LCM = lcm(n1, n2, GCD);
	printf("The GCD of %d and %d is: %d\n", n1, n2, GCD);
	printf("The LCM of %d and %d is: %d", n1, n2, LCM);
	return 0;
}

int gcd(int a, int b){
	int temp;
	while(b != 0){
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int lcm(int a, int b, int gcd){
	return (a * b) / gcd;
}
