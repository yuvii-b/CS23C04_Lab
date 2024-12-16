#include <stdio.h>
#include <math.h>
#define PI 3.14

float distance(int, int, int, int);
float radius(int, int, int, int);
float circumference(float);
float area(float);

int main(){
	int cx, cy, px, py;
	float Radius, circum, Area;
	printf("Enter the (x, y) coords of circle center: ");
	scanf("%d %d", &cx, &cy);
	printf("Enter the point coords (px, py): ");
	scanf("%d %d", &px, &py);
	Radius = radius(cx, cy, px, py);
	circum = circumference(Radius);
	Area = area(Radius);
	printf("Radius: %.2f Circumference: %.2f Area: %.2f", Radius, circum, Area);
	return 0;
}

float distance(int x1, int y1, int x2, int y2){
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

float radius(int cx, int cy, int px, int py){
	return distance(cx, cy, px, py);
}

float circumference(float r){
	return (2 * PI * r);
}

float area(float r){
	return PI * r * r;
}
