#include <stdio.h>

enum Month{
    January = 1, February, March, April, May, June, July, August, September, October, November, December
};

int main(){
    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);
    switch(month){
        case January: printf("Month %d: January", month); break;
        case February: printf("Month %d: February", month); break;
        case March: printf("Month %d: March", month); break;
        case April: printf("Month %d: April", month); break;
        case May: printf("Month %d: May", month); break;
        case June: printf("Month %d: June", month); break;
        case July: printf("Month %d: July", month); break;
        case August: printf("Month %d: August", month); break;
        case September: printf("Month %d: September", month); break;
        case October: printf("Month %d: October", month); break;
        case November: printf("Month %d: November", month); break;
        case December: printf("Month %d: December", month); break;
        default: printf("Invalid month number");
    }
    return 0;
}