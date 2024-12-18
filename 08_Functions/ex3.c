#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year){
	if(year % 4 == 0 || year % 400 == 0 && year % 100 != 0) return true;
	else return false;	
}

int main(){
	int year;
	printf("Enter a year to check for leap year: ");
	scanf("%d", &year);
	if(isLeapYear(year))
		printf("%d is a leap year");
	else
		printf("%d is not a leap year");
	return 0;
}
