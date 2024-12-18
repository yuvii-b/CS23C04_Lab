#include <stdio.h>
#include <limits.h>

int main(){
	int n, total, max = INT_MIN, min = INT_MAX;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	int numbers[n];
	for(int i = 0; i < n; ++i){
		printf("Enter term %d: ", i + 1);
		scanf("%d", &numbers[i]);
		total += numbers[i];
		if(numbers[i] >= max) max = numbers[i];
		if(numbers[i] <= min) min = numbers[i];
	}
	printf("TOTAL %d\n", total);
	printf("AVERAGE %.2f\n", 1.0 * total / n);
	printf("MAXIMUM %d\n", max);
	printf("MINIMUM %d\n", min);
	return 0;
}
