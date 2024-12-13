#include <stdio.h>
#include <math.h>

int main(){
	int n;
	double result = 0.0;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	for(int i = 0; i < n; ++i){
		result += (pow(i + 1, 2) / 2); 
	}
	printf("The sum of the series is : %.2f", result);
	return 0;
}
