#include <stdio.h>

int reverse(int number){
    int rev = 0;
    while(number != 0){
        int n = number % 10;
        rev = (rev * 10) + n;
        number /= 10;
    }
    return rev;
}

int isPalindrome(int number){
    return number == reverse(number); 
}

int main(){
    int n, flag = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; ++i){
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Palindromes: \n");
    for(int i = 0; i < n; ++i){
        if(isPalindrome(arr[i])){
            printf("%d ", arr[i]);
            flag = 1;
        }
    }
    if(!flag) printf("No palindrome numbers are found!\n");
    return 0;
}