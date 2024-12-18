#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	printf("Enter the values of a, b and c of a triangle: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a + b > c && b + c > a && a + c > b){
		float s = (a + b + c) / 2;
		float area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("The area of the triangle is : %.2f", area);
	}else printf("Invalid a, b, c values!");
	return 0;
}
