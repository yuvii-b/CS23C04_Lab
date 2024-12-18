#include <stdio.h>

int main(){
	int num, rev = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	int temp = num;
	do{
		int n = temp % 10;
		rev = (rev * 10) + n;
		temp /= 10;
	}while(temp!=0);
	if(rev == num) printf("palindrome");
	else printf("Not palindrome");
	return 0;
}
