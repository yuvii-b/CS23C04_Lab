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
