#include <stdio.h>

int main(){
	int n;
	printf("Enter the n value: ");
	scanf("%d", &n);
	int num = 1;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= i; ++j){
			printf("%d ", num);
			++num;
		}
		printf("\n");
	}
	return 0;
}
