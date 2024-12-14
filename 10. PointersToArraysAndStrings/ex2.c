#include <stdio.h>

int biggest(int *a, int *b){
    return (*a > *b) ? *a : *b;
}

int main(){
    int a, b;
    printf("Enter the two number to find the biggest number: ");
    scanf("%d %d", &a, &b);
    printf("The biggest number is %d", biggest(&a, &b));
    return 0;
}