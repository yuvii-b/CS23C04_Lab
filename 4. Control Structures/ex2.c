// program to find the absolute value of a number
#include <stdio.h>
int main(){
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  if(number < 0)
   	printf("%d\n", -1 * number);
  if(number > 0) 
	printf("%d\n", number);
  return 0;
}
