#include <stdio.h>

int main(){
 	int n1, n2;
	printf("Enter the starting number: ");
	scanf("%d", &n1);
	printf("Enter the ending number: ");
	scanf("%d", &n2);
	printf("The odd numbers from %d to %d are: \n", n1, n2);
	while(n1 <= n2){
		if(n1 % 2 == 1) printf("%d ", n1);
		++n1;	
	}
	return 0;
}
