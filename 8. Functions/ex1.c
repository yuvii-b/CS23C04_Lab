#include <stdio.h>

int fact(int n){
	int f = 1;
	for(int i = 1; i <= n; ++i){
		f *= i;
	}
	return f;
}

int main(){
	int n, r;
	float combination;
	printf("Enter the value of n and r to perform NcR: ");
	scanf("%d %d", &n, &r);
	combination = fact(n) / (fact(r) * fact(n - r));
	printf("%.f", combination);
	return 0;	
}
