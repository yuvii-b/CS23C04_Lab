#include <stdio.h>

int main(){
	int n1, n2;
	printf("Enter the starting number: ");
	scanf("%d", &n1);
	printf("Enter the ending number: ");
	scanf("%d", &n2);
	for(n1; n1 <= n2; ++n1){
		if(n1 % 7 == 0) printf("%d ", n1);
	}
	return 0;
}
