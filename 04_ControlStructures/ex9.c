// program to find the roots of a quadratic equation
#include <stdio.h>
#include <math.h>
int main(){
 int a, b, c;
 float d;
 printf("Enter the value of a in the quadratic equation: ");
 scanf("%d", &a);
 printf("Enter the value of b in the quadratic equation: ");
 scanf("%d", &b);
 printf("Enter the value of c in the quadratic equation: ");
 scanf("%d", &c);
 printf("The roots are: ");
 d = (pow(b, 2)) - (4 * a * c);
 if(d > 0){
	 float r1, r2;
	 r1 = ((-1 * b) + sqrt(d)) / (2 * a);
	 r2 = ((-1 * b) -  sqrt(d)) / (2 * a);
	 printf("\nRoot 1: %.2f", r1);
	 printf("\nRoot 2: %.2f\n", r2); 
 }else if(d < 0){
	 float r1;
	 float imag = sqrt(-1 * d) / (2 * a);
	 r1 = (-1 * b) / (2 * a);
	 printf("\nRoot 1: %.2f + %.2fi", r1, imag);
	 printf("\nRoot 2: %.2f - %.2fi\n", r1, imag);
 }else{
         int r1 = 0, r2 = 0;
	 printf("\nRoot 1: %d", r1);
	 printf("\nRoot 2: %d\n", r2);
 }
 return 0;
}
