#include <stdio.h>
#include <string.h>

void str_cat(char *str1, char *str2){
    while(*str1 != '\0') str1++;
    while(*str2 != '\0'){
        *str1 = *str2;
        str1++;
        str2++;
    }
}

int main(){
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    str_cat(str1, str2);
    printf("Concatenated String: %s", str1);
    return 0;
}