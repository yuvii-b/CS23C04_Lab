// program for biggest of three numbers - nested if statements
#include <stdio.h>
int main(){
  int a, b, c;
  printf("Enter number 1: ");
  scanf("%d", &a);
  printf("Enter number 2: ");
  scanf("%d", &b);
  printf("Enter number 3: ");
  scanf("%d", &c);
  if(a > b)
	  if(a > c)
		  printf("%d is the largest\n", a);
	  else
		  printf("%d is the largest\n", c);
  else
	  if(b > c)
		  printf("%d is the largest\n", b);
  	  else
		  printf("%d is the largest\n", c);
  return 0;
}
