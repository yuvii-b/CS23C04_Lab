#include<stdio.h>
#include<math.h>
int main(){
    long int bin,dec=0,temp,d=0;
    printf("Enter a number in binary form:");
    scanf("%ld",&bin);
    temp = bin;
    do{
        int c = bin % 10;
         dec = dec + c*pow(2,d);
         bin = bin / 10;
         d++;
    }while(bin != 0);
    printf("Decimal equivalent of %ld is %ld ",temp,dec);
}
