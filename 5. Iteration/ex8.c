#include <stdio.h>

int main(){
	int n, p_count = 0, n_count = 0;
	do{
		printf("Enter any positive or negative numbers, press zero to quit:");
		scanf("%d", &n);
		if(n < 0) ++n_count;
		if(n > 0) ++p_count;
	}while(n != 0);
	printf("Positive numbers count: %d\n", p_count);
	printf("Negative numbers count: %d\n", n_count);
	return 0;
}
