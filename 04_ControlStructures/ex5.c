// program to determine whether the student is fail or pass
#include <stdio.h>
int main(){
  int avg;
  printf("Enter the average of 5marks: ");
  scanf("%d", &avg);
  if(avg >= 50)
	  printf("The student is pass\n");
  else
	  printf("The student is fail\n");
  return 0;
}
