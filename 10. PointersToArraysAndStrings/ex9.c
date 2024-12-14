#include <stdio.h>

void updatePtr(int **dptr){
    **dptr = 20;
}

int main(){
    int num = 10;
    int *ptr = &num;
    int **dptr = &ptr;
    printf("Value of number: %d\n", num);
    printf("Value of number using pointer: %d\n", *ptr);
    printf("value of number using double pointer: %d\n", **dptr);
    printf("Address of double pointer (dptr): %p\n", dptr);
    printf("Address of pointer (ptr): %p\n", *dptr);
    updatePtr(dptr);
    printf("After updation of double pointer:\n");
    printf("value of number: %d\n", num);
    printf("Address of double pointer (dptr): %p\n", dptr);
    printf("Value at the address dptr points to (which is ptr): %p\n", *dptr);
    printf("Value at the address ptr points to (using **dptr): %d\n", **dptr);
    return 0;
}