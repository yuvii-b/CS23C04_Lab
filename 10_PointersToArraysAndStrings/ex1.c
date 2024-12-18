#include <stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;
    printf("The value of the variable a: %d\n", a);
    printf("The address of the variable a: %p\n", (void *)ptr);
    printf("The address of the variable a: %p\n", (void *)&a);
    return 0;
}