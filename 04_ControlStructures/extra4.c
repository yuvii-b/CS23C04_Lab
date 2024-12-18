#include <stdio.h>
int main(){
	int number, units;
	float charge;
	printf("Enter the consumer number: ");
	scanf("%d", &number);
	printf("Enter the no of units consumed: ");
	scanf("%d", &units);
	if(units < 0) printf("Invalid input");
	if(units >= 0 && units <= 200) charge = 0.50 * units;
	else if(units >= 201 && units <= 400) charge = 100 + (0.65 * (units - 200));
	else if(units >= 401 && units <= 600) charge = 230 + (0.80 * (units - 400));
	else charge = 320 + (1.00 * (units - 600));
	printf("The monthly bill is Rs %.2f\n", charge);
	return 0;
}
