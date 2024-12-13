// nested if
#include <stdio.h>
int main(){
  int x, y;
  printf("Enter the value for x: ");
  scanf("%d", &x);
  if(x > 0)
	  y = 1;
  else if(x < 0)
	  y = -1;
  else
	  y = 0;
  printf("%d\n", y);
  return 0;
}
