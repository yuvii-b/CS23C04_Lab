#include <stdio.h>
#include <stdbool.h>

int reverseMethod(int);
bool isPalindrome(int);

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(isPalindrome(n)) printf("%d is a palindrome.", n);
	else printf("%d is not a palindrome.", n);
	return 0;
}

int reverseMethod(int n){
	int rev = 0;
	while(n != 0){
		int l = n % 10;
		rev = (rev * 10) + l;
		n /= 10;
	}
	return rev;
}

bool isPalindrome(int n){
	if(reverseMethod(n) == n) return true;
	else return false;
}
