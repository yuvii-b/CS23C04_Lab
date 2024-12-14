#include <stdio.h>
#include <math.h>

double perimeter(double, double, double);
double area(double, double, double);
int displayMenu();

int main(){
    double a, b, c;
    int choice;
    printf("Enter the three side(a, b, c) of a triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a + b <= c || a + c <= b || b + c <= a){
        printf("The given sides do not form a triangle");
        return 1;
    }
    do{
        choice = displayMenu();
        switch(choice){
            case 1:
                printf("Perimter of the triangle is %.2lf\n", perimeter(a, b, c));
                break;
            case 2:
                printf("Area of the triangle is %.2lf\n", area(a, b, c));
                break;
            case 3:
                printf("Exitting the program!\n");
                break;
            default:
                printf("Invalid Choice! Try again\n");
        }
    }while(choice != 3);
    return 0;
}

double perimeter(double a, double b, double c){
    return a + b + c;
}

double area(double a, double b, double c){
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int displayMenu(){
    int choice;
    printf("\n-------TRIANGLE CALCULATOR--------\n");
    printf("1. Calculate Perimeter:\n");
    printf("2. Calculate Area:\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}