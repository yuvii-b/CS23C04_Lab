//  Write a C program for the following scenario, If Gender of the employee is Male the 
following conditions apply for Tax Payable calculation: 
Up to Rs 1 Lakh of Net Salary – No Tax 
Net salary > 1 Lakh – 10% 
If Gender of the employee is Female the following conditions apply for Tax Payable 
calculation: Up to Rs 1.35 Lakh of Net Salary – No Tax 
Net salary > 1.35 Lakh – 10% Tax using nested if. 
Accept gender as character (m or f)

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
