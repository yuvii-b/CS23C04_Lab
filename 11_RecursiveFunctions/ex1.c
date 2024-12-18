#include <stdio.h>

int fact(int n){
    if(n == 1 || n == 0) return 1;
    else return n * fact(n - 1);
}

int combination(int n, int r){
    return fact(n) / (fact(r) * fact(n - r));
}

int main(){
    int n, r, res;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);
    if(r > n){
        printf("Invalid values of n and r");
        return 0;
    }
    res = combination(n, r);
    printf("The resultant value is %d", res);
    return 0;
}