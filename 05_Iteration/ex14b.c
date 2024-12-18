#include <stdio.h>
#include <math.h>

int main(){
	int x, n, term, sign = -1;
	double sum = 0.0;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	term = x;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i){
		printf("%d", sign * term);
		sum += sign * pow(x, i);
		sign *= -1;
		term *= x;
		if(term >= 0 && sign > 0 && i < n) printf("+");
	}
	printf("\nSum of the pattern is: %.2f", sum);
	return 0;
}
