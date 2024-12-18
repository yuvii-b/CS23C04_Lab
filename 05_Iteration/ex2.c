#include <stdio.h>

int main(){
	int n1, n2, sum = 0;
	printf("Enter the starting number: ");
	scanf("%d", &n1);
	printf("Enter the ending number: ");
	scanf("%d", &n2);
	int i = n1;
	while(i <= n2){
		if(i % 2 == 0) sum += i;
		++i;
	}
	printf("The sum of all even numbers from %d and %d is %d\n", n1, n2, sum);
	return 0;
}
