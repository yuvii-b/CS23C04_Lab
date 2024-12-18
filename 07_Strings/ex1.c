#include <stdio.h>
#include <string.h>

int main(){
	printf("With the help of string functions:\n");
	char str1[100] = "Hello";
	char str2[] = "World";
	printf("String length: %d\n", strlen(str1));
	strcpy(str1, str2);
	printf("String copy: %s\n", str1);
	strcat(str1, str2);
	printf("String concatenation: %s\n", str1);
	printf("String compare: %d\n", strcmp(str1, str2));
	printf("String reverse: %s\n", strrev(str1)); // will not work in telnet's compiler
	printf("Without the help of string functions:\n");
	char str3[100] = "Hello";
	char str4[] = "World";
	//strlen
	int length = 0;
	while(str3[length] != '\0') length++;
	printf("String length: %d\n", length);
	//strcpy
	int i = 0;
	while(str4[i] != '\0'){
		str3[i] = str4[i];
		i++;
	}
	str3[i] = '\0';
	printf("String copy: %s\n", str3);
	//strcat
	int des = 0;
	while(str3[des] != '\0') des++;
	i = 0;
	while(str4[i] != '\0'){
		str3[des + i] = str4[i];
		i++;
	}
	str3[des + i] = '\0';
	printf("String concatenation: %s\n", str3);
	//strcmp
	i = 0;
	int comp = 0;
	while(str3[i] != '\0' && str4[i] != '\0'){
		if(str3[i] != str4[i]){
			comp = str3[i] - str4[i];
			break;
		}
		i++;
	}
	if(comp == 0) comp = str3[i] - str4[i];
	printf("String compare: %d\n", (comp>0) ? 1 : 0);
	//strrev
	int len = 0;
	while(str3[len] != '\0') len++;
	for(i = 0; i < len / 2; ++i){
		char temp = str3[i];
		str3[i] = str3[len - i - 1];
		str3[len - i - 1] = temp;
	}
	printf("String reverse: %s\n", str3);
	return 0;
}