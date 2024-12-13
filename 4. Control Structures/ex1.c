// program to print "good" when the given number is less than or equal to 10
#include <stdio.h>
int main(){
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  if(number <= 10)
  	printf("good\n");
  return 0;
}
