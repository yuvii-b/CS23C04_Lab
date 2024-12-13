#include <stdio.h>

int main(){
	int a = 0, b = 1, c, limit;
	printf("Enter the limit of fibonacci numbers to print: ");
	scanf("%d", &limit);
	printf("%d %d ", a, b);
	while((a+b) <= limit){
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
	return 0;
}
