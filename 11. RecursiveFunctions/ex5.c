#include <stdio.h>

int hcf(int a, int b){
    if(b == 0) return a;
    else return hcf(b, a % b);
}

int main(){
    int a, b, result;
    printf("Enter two number to find their hcf: ");
    scanf("%d %d", &a, &b);
    result = hcf(a, b);
    printf("HCF of %d and %d is %d", a, b, result);
    return 0; 
}