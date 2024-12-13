#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define PI 3.1416

int main(){
	double x;
	char T;
	printf("Enter the value of angle in degrees: ");
	scanf("%lf", &x);
	printf("Enter the trignometric function to perform(s or S - sin, c or C - cos, t ot T - tan)");
	scanf(" %c", &T);
	T = tolower(T);
	double rad = (PI / 180) * x;
	switch(T){
		case 's':
			printf("sin(%lf) = %lf", rad, sin(rad));
			break;
		case 'c':
			printf("cos(%lf) = %lf", rad, cos(rad));
			break;
		case 't':
			printf("tan(%lf) = %lf", rad, tan(rad));
			break;
		default:
			printf("Invalid Input!");
	}
	return 0;
}
