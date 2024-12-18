#include <stdio.h>

struct Allowance{
    float dearness;
    float house_rent;
    float city;
};

struct Salary{
    char name[50];
    char department[50];
    int basic_pay;
    struct Allowance allowance;
}employee[5];

int main(){
    float grosspay[5];
    for(int i = 0; i < 5; ++i){
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employee[i].name);
        printf("Enter department of employee %d: ", i + 1);
        scanf("%s", employee[i].department);
        printf("Enter the basic pay: ");
        scanf("%d", &employee[i].basic_pay);
        printf("Enter the dearness allowance: ");
        scanf("%f", &employee[i].allowance.dearness);
        printf("Enter the house rent allowance: ");
        scanf("%f", &employee[i].allowance.house_rent);
        printf("Enter the city allowance: ");
        scanf("%f", &employee[i].allowance.city);
        grosspay[i] = employee[i].basic_pay + employee[i].allowance.house_rent + employee[i].allowance.dearness + employee[i].allowance.city;
    }
    printf("The gross pay of the employees: \n");
    for(int i = 0; i < 5; ++i){
        printf("Employee: %s\nDepartment: %s\nGross Pay: %.2f\n", employee[i].name, employee[i].department, grosspay[i]);
    }


    return 0;
}