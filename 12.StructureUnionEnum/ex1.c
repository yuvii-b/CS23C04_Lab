#include <stdio.h>

typedef int INTEGER;

int main(){
    INTEGER a = 10;
    INTEGER b = 20;
    printf("Addition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %d\nModulus: %d", a + b, a - b, a * b, a / b, a % b);
    return 0;
}