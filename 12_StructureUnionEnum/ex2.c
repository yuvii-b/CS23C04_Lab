#include <stdio.h>

struct Student{
    int roll_no;
    char name[50];
    int marks;
};

int main(){
    struct Student student1 = {101, "Yuvi", 80};
    struct Student student2 = {102, "Ram", 90};
    printf("Student1 details:\n");
    printf("Roll No: %d,\nName: %s,\nMarks: %d\n", student1.roll_no, student1.name, student1.marks);
    printf("Student2 details:\n");
    printf("Roll No: %d,\nName: %s,\nMarks: %d\n", student2.roll_no, student2.name, student2.marks);
    return 0;
}