#include<stdio.h>
#include<math.h>
int main(){
    long int bin=0,dec,temp,d=0;
    printf("Enter a number in decimal form:");
    scanf("%ld",&dec);
    temp =dec;
   do {
        int c = dec % 2;
         bin= bin + c*pow(10,d);
         dec = dec / 2;
         d++;
    }while(dec != 0);
    printf("Binary equivalent of %ld is %ld ",temp,bin);
}
