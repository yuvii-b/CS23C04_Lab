#include<stdio.h>
#include<math.h>
int main(){
    long int bin,dec=0;
    printf("Enter a number in binary form:");
    scanf("%ld",&bin);
    long int temp = bin,d=0;
    while(bin != 0){
        int c = bin % 10;
         dec = dec + c*pow(2,d);
         bin = bin / 10;
         d++;
    }
    printf("Decimal equivalent of %ld is %ld ",temp,dec);
}