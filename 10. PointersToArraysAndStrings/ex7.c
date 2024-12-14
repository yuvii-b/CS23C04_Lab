#include <stdio.h>
#include <string.h>

int len(char *str){
    int length = 0;
    while(*str != '\0'){
        length++;
        str++;
    }
    return length;
}

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = len(str);
    printf("Length of string %s is %d", str, length);
    return 0;
}