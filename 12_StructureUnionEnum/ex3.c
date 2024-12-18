#include <stdio.h>

struct Employee{
    char name[50];
    int e_id;
    int salary;
};

int main(){
    struct Employee employee;
    printf("Enter the employee name: ");
    fgets(employee.name, sizeof(employee.name), stdin);
    printf("Enter the employee id: ");
    scanf("%d", &employee.e_id);
    printf("Enter the employee salary: ");
    scanf("%d", &employee.salary);
    printf("EMPLOYEE DETAILS: \n");
    printf("Name: %sEmployee ID: %d\nSalary: %d", employee.name, employee.e_id, employee.salary);
    return 0;
}