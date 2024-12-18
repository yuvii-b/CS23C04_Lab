// A certain grade of steel is graded according to the following conditions:  
(i) Hardness must be greater than 50  
(ii) Carbon content must be less than 0.7  
(iii) Tensile strength must be greater than 5600  
The grades are as follows: Grade is 10 if all three conditions are met  
Grade is 9 if conditions (i) and (ii) are met  
Grade is 8 if conditions (ii) and (iii) are met  
Grade is 7 if conditions (i) and (iii) are met  
Grade is 6 if only one condition is met  
Grade is 5 if none of the conditions are met  
Write a program, which will require the user to give values of hardness, carbon content and tensile 
strength of the steel under consideration and output the grade of the steel.  
#include <stdio.h>
int main(){
	int hardness, tens_strength, grade;
	float carbon_content;
	printf("Enter the hardness of the steel: ");
	scanf("%d", &hardness);
	printf("Enter the carbon content of the steel: ");
	scanf("%f", &carbon_content);
	printf("Enter the tensile strength of the steel: ");
	scanf("%d", &tens_strength);
	if(hardness > 50 && carbon_content < 0.7 && tens_strength > 5600) grade = 10;
	else if(hardness > 50 && carbon_content < 0.7 && tens_strength <= 5600) grade = 9;
	else if(hardness < 50 && carbon_content < 0.7 && tens_strength > 5600) grade = 8;
	else if(hardness > 50 && carbon_content >= 0.7 && tens_strength > 5600) grade = 7;
	else if(hardness > 50 || carbon_content < 0.7 || tens_strength > 5600) grade = 6;
	else grade = 5;
	printf("%d", grade);
	return 0;
}
