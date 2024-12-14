#include <stdio.h>
#include <stdbool.h>

bool isPrime(int);

int main(){
	int n1, n2;
	printf("Enter the number range to check for prime numbers: ");
	scanf("%d %d", &n1, &n2);
	for(n1; n1 <= n2; ++n1){
		if(isPrime(n1)) printf("%d ", n1);
	}
	return 0;
}

bool isPrime(int n){
	if(n <= 1) return 0;
	for(int i = 2; i * i <= n; ++i){
		if(n % i == 0)
			return false;
	}
	return true;
}
