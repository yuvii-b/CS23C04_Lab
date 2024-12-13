//program to print the biggest of three number
#include<stdio.h>
int main(){
  int a, b, c;
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second numnber: ");
  scanf("%d", &b);
  printf("Enter the third number: ");
  scanf("%d", &c);
  if(a > b && a > c)
	  printf("%d is the biggest of the three\n", a);
  if(b > a && b > c)
	  printf("%d is the biggest of the three\n", b);
  if(c > a && c > b)
	  printf("%d is the biggest of the three\n", c);
  return 0;
	  
}
