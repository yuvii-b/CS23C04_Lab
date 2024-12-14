#include <stdio.h>

int reverse(int n, int rev_num){
    if(n == 0) return rev_num;
    else return reverse(n / 10, rev_num * 10 + (n % 10));
}

int main(){
    int number, rev;
    printf("Enter a number to reverse: ");
    scanf("%d", &number);
    rev = reverse(number, 0);
    printf("The reverse of %d is %d", number, rev);
    return 0;
}