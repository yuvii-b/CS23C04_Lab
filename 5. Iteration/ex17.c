#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    float deg, result = 0.0;
    int n, sign = 1;

    printf("Enter the angle in degrees: ");
    scanf("%f", &deg);
    printf("Enter the number of terms for approximation: ");
    scanf("%d", &n);

    float rad = deg * (PI / 180);

    for (int i = 0; i < n; i++) {
        float factorial = 1.0; 
        for (int fact = 1; fact <= 2 * i + 1; fact++) {
            factorial *= fact;
        }
        result += (pow(rad, 2 * i + 1) / factorial) * sign;
        sign *= -1;
    }

    printf("sin(%f) ≈ %f\n", deg, result);
    printf("Built-in sin(%f) = %f\n", deg, sin(rad));
    return 0;
}
