#include <stdio.h>

void readNumbers(double *, double *);
double calculateSum(double, double);
double calculateDifference(double, double);
double calculateProduct(double, double);
double calculateDivision(double, double);
void displayResult(int, double);
int displayMenu();

int main(){
    int choice;
    double a, b, result;
    do{
        choice = displayMenu();
        switch(choice){
            case 1:
                readNumbers(&a, &b);
                result = calculateSum(a, b);
                displayResult(choice, result);
                break;
            case 2:
                readNumbers(&a, &b);
                result = calculateDifference(a, b);
                displayResult(choice, result);
                break;
            case 3:
                readNumbers(&a, &b);
                result = calculateProduct(a, b);
                displayResult(choice, result);
                break;
            case 4:
                readNumbers(&a, &b);
                result = calculateDivision(a, b);
                if(b != 0)
                    displayResult(choice, result);
                break;
            case 5:
                printf("Exitting the program!\n");
                break;
            default:   
                printf("Invalid choice, Try Again!\n"); 
        }
    }while(choice != 5);
    return 0;
}

void readNumbers(double *a, double *b){
    printf("Enter first number and second number: ");
    scanf("%lf %lf", a, b);
}

double calculateSum(double a, double b){
    return a + b;
}

double calculateDifference(double a, double b){
    return a - b;
}

double calculateProduct(double a, double b){
    return a * b;
}

double calculateDivision(double a, double b){
    if(b == 0){
        printf("Division by zero is not possible.\n");
        return 0;
    }
    return a / b;
}

void displayResult(int choice, double result){
    switch(choice){
        case 1:
            printf("Sum: %.2lf\n", result);
            break;
        case 2:
            printf("Difference: %.2lf\n", result);
            break;
        case 3:
            printf("Product: %.2lf\n", result);
            break;
        case 4:
            printf("Division quotient: %.2lf\n", result);
            break;
    }
}

int displayMenu(){
    int choice;
    printf("\n----SIMPLE CALCULATOR----\n");
    printf("1. Sum\n");
    printf("2. Difference\n");
    printf("3. Product\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}