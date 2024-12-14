#include <stdio.h>
#include <string.h>

int strComp(char str1[], char str2[]){
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] < str2[i]) return -1;
        else if(str1[i] > str2[i]) return 1;
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0') return 0;
    else if(str1[i] == '\0') return -1;
    else return 1;
}

int main(){
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    int result = strComp(str1, str2);
    printf("Comparison result of strings is %d", result);
    return 0;
}