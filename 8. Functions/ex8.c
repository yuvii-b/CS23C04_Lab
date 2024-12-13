#include <stdio.h>
#include <stdbool.h>

bool isPrime(int);

int main(){
	int n1, n2;
	printf("Enter the number range to check for prime numbers: ");
	scanf("%d %d", &n1)
	scanf("%d", &n);
	printf("%d", isPrime(n));
	return 0;
}

bool isPrime(int n){
	for(int i = 2; i * i <= n; ++i){
		if(n % i == 0)
			return false;
	}
	return true;
}
