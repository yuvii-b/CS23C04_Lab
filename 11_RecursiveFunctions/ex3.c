#include <stdio.h>

int sum(int n){
    if(n == 1) return 1;
    else return n + sum(n - 1);
}

int main(){
    int n;
    printf("Enter the value of n upto which sum is to be computed: ");
    scanf("%d", &n);
    printf("Sum of %d natural numbers is: %d", n, sum(n));
    return 0;
}