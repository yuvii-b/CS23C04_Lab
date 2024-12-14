#include <stdio.h>
#include <string.h>

union data{
    int a;
    float b;
    char c[50];
};

int main(){
    union data d;
    union data *ptr;
    ptr = &d;
    printf("Enter integer value: ");
    scanf("%d", &ptr->a);
    printf("The integer value entered is: %d\n", ptr->a);
    printf("Enter float value: ");
    scanf("%f", &ptr->b);
    printf("The float value entered is: %.2f\n", ptr->b);
    printf("Enter a string: ");
    getchar();
    fgets(ptr->c, sizeof(ptr->c), stdin);
    ptr->c[strcspn(ptr->c, "\n")] = '\0';
    printf("The string entered is %s", ptr->c);
    return 0;
}