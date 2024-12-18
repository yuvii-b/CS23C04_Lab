#include <stdio.h>

struct DOB{
    int day;
    int month;
    int year;
};

struct Personal{
    char name[50];
    char gender;
    struct DOB dob;
    int salary; 
};

int main(){
    struct Personal p1;
    printf("Enter the name: ");
    fgets(p1.name, sizeof(p1.name), stdin);
    printf("Enter the gender(M/F): ");
    scanf(" %c", &p1.gender);
    printf("Enter the date of birth(FORMAT: DD-MM-YYYY): ");
    scanf("%d-%d-%d", &p1.dob.day, &p1.dob.month, &p1.dob.year);
    printf("Enter the salary: ");
    scanf("%d", &p1.salary);
    printf("PERSONAL INFO: \n");
    printf("Name: %sGender: %c\nDate of birth: %d-%d-%d\nSalary: %d", p1.name, p1.gender, p1.dob.day, p1.dob.month, p1.dob.year,p1.salary);
    return 0;
}