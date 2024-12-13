#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 5

int main(){
	int x[SIZE], y[SIZE]; 
	float x_mean, y_mean, numerator, d1, d2, denominator, coeff;
	srand(time(NULL));
	for(int i = 0; i < SIZE; ++i){
		x[i] = (rand() % 10) + 1;
		y[i] = (rand() % 10) + 1;
		x_mean += x[i];
		y_mean += y[i];
	}
	x_mean = 1.0 * x_mean /  (1.0 * SIZE);
	y_mean = 1.0 * y_mean / (1.0 * SIZE);
	for(int i = 0; i < SIZE; ++i){
		numerator += (x[i] - x_mean) * (y[i] - y_mean);
		d1 += pow(x[i] - x_mean, 2);
		d2 += pow(y[i] - y_mean, 2);
	}
	denominator = pow((d1 * d2), 1/2.0);
	coeff = numerator / denominator;
	printf("%f", coeff);
	return 0;
}
