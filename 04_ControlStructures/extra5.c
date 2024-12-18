#include <stdio.h>
int main(){
	float value;
	printf("Enter the richter scale intensity of the earthquake: ");
	scanf("%f", &value);
	if(value < 5.0) printf("Little or no damage");
	else if(value >= 5.0 && value < 5.5) printf("some damage");
	else if(value >= 5.5 && value < 6.5) printf("serious damage");
	else if(value >= 6.5 && value < 7.5) printf("Disaster");
	else printf("Catastrophe");
	return 0;
}
