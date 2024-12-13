#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Enter the number of terms in the sequence: ");
	scanf("%d", &n);
	for(int i = 0; i <= n; ++i){
		printf("%d ", (int)pow(3, i));
	}
	return 0;
}
