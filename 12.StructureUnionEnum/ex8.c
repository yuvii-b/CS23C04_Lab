#include<stdio.h>
#include<string.h>

union class{
    int number;
    char name[50];
    char department[50];
};

int main(){
    union class students[5];
    for(int i = 0; i < 5; ++i){
        printf("Student %d:\n", i + 1);
        printf("Enter class number: ");
        scanf("%d", &students[i].number);
        printf("Class No. %d\n", students[i].number);
        printf("Enter the name of the student: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("The name of the student is: %s\n", students[i].name);
        printf("Enter department name: ");
        fgets(students[i].department, sizeof(students[i].department), stdin);
        students[i].department[strcspn(students[i].department, "\n")] = '\0';
        printf("The department of the student is %s\n", students[i].department);
    }
    return 0;
}