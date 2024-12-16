#include <stdio.h>

struct Employee{
    int number;
    char name[50];
    float pay;
    char doj[50];
};

void payincrease(float *p){
    if(*p <= 2000){
        *p *= 1.15;
        printf("New Pay: %.2f", *p);
    }
    else if(*p > 2000 && *p <= 5000){
        *p *= 1.10;
        printf("New Pay: %.2f", *p);
    }else if(*p > 5000){
        printf("No Pay Increase");
    }else{
        printf("Invalid pay value!");
    }
}

int main(){
    struct Employee e1;
    printf("Enter the employee number: ");
    scanf("%d", &e1.number);
    printf("Enter the employee name: ");
    getchar();
    fgets(e1.name, sizeof(e1.name), stdin);
    printf("Enter the employee pay: ");
    scanf("%f", &e1.pay);
    printf("Enter the joining date(DD/MM/YYYY): ");
    getchar();
    fgets(e1.doj, sizeof(e1.doj), stdin);
    payincrease(&e1.pay);
    return 0;
}
