// Tax payable calculation
#include <stdio.h>
int main(){
  int salary;
  char gender;
  printf("Enter the net salary: ");
  scanf("%d", &salary);
  printf("Enter your gender(m/f): ");
  scanf("%d", &gender);
  if(gender == 'm' || gender == 'M'){
  	if(salary <= 100000) printf("No Tax\n");
	else printf("Tax: %.2f\n", 0.1 * salary);
  }else{
	if(salary <= 135000) printf("No Tax\n");
	else printf("Tax: %.2f\n", 0.1 * salary);
  }
  return 0;
}
