#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    int reg_no;
    char branch[50];
    float avg_marks;
};

void printProfile(struct Student *students, int n, char *b_name){
    int pass = 0, fail = 0;
    // printf("Students passed in branch %s:\n", b_name);
    for(int i = 0; i < n; ++i){
        if(strcmp(b_name, students[i].branch) == 0){
            if(students[i].avg_marks >= 50.0){
                printf("%s: PASS\n", students[i].name);
                pass++;
            }else{
                printf("%s: FAIL\n", students[i].name);
                fail++;
            }
        }
    }
    printf("Branch: %s\n", b_name);
    printf("No of students passed: %d\n", pass);
    printf("No of students failed: %d\n", fail);
}

int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();
    struct Student students[n];
    for(int i = 0; i < n; ++i){
        printf("Enter the details for the student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Register Number: ");
        scanf("%d", &students[i].reg_no);
        getchar();
        printf("Branch Name: ");
        fgets(students[i].branch, sizeof(students[i].branch), stdin);
        students[i].branch[strcspn(students[i].branch, "\n")] = '\0';
        printf("Average Marks: ");
        scanf("%f", &students[i].avg_marks);
        getchar();
    }
    char b_name[50];
    printf("Enter the branch name to search: ");
    fgets(b_name, sizeof(b_name), stdin);
    b_name[strcspn(b_name, "\n")] = '\0';
    struct Student *ptr = students;
    printProfile(ptr, n, b_name);
    return 0;
}