#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("AFTER SWAPPING IN FUNCTION, a: %d, b: %d\n", *a, *b);
}

int main(){
    int a = 10, b = 20;
    printf("BEFORE SWAPPING, a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("AFTER SWAPPING IN MAIN, a: %d, b: %d\n", a, b);
    return 0;
}