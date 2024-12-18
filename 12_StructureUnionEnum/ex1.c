#include <stdio.h>

typedef struct{
    int value;
}INTEGER;

INTEGER calculate(INTEGER a, INTEGER b, char operator) {
    INTEGER result;
    switch (operator) {
        case '+':
            result.value = a.value + b.value;
            break;
        case '-':
            result.value = a.value - b.value;
            break;
        case '*':
            result.value = a.value * b.value;
            break;
        case '/':
            if (b.value == 0) {
                printf("Error: Division by zero!\n");
                result.value = 0;
            } else {
                result.value = a.value / b.value;
            }
            break;
        default:
            printf("Error: Invalid operator '%c'\n", operator);
            result.value = 0;
            break;
    }
    return result;
}

int main(){
    INTEGER a, b, c;
    a.value = 10;
    b.value = 5;
    c = calculate(a, b, '+');
    printf("Addition: %d + %d = %d\n", a.value, b.value, c.value);
    c = calculate(a, b, '-');
    printf("Subtraction: %d - %d = %d\n", a.value, b.value, c.value);
    c = calculate(a, b, '*');
    printf("Multiply: %d * %d = %d\n", a.value, b.value, c.value);
    c = calculate(a, b, '/');
    printf("Divide: %d / %d = %d\n", a.value, b.value, c.value);
    c = calculate(a, b, '%');
    printf("Modulus: %d % %d = %d\n", a.value, b.value, c.value);
    return 0;
}