#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Enter the number of terms in the sequence: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i){
		printf("%d ", (int)pow(i, 3));
	}
	return 0;
}
