#include <stdio.h>
#include <math.h>

int main(){
	int x, n, term = 1;
	double sum = 0.0;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(int i = 0; i <= n; ++i){
		printf("%d", term);
		sum += pow(x, i);
		term *= x;
		if(term >= 0 && i < n) printf("+");
	}
	printf("\nThe sum of the pattern is: %.2f", sum);
	return 0;
}
