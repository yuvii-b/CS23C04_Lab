#include<stdio.h>
#include<math.h>
int main(){
    long int bin=0,dec;
    printf("Enter a number in decimal form:");
    scanf("%ld",&dec);
    long int temp = dec,d=0;
    while(dec != 0){
        int c = dec % 2;
         bin= bin + c*pow(10,d);
         dec = dec / 2;
         d++;
    }
    printf("Binary equivalent of %ld is %ld ",temp,bin);
}