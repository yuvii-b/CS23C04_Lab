#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "hello", str1[] = "world", word1[100], word2[100];
	//strlen()
	int count = 0;
	for(int i = 0; str[i] != '\0'; ++i){
		++count;
	}
	// strcpy()
	for(int i = 0; str[i]!='\0'; ++i){
		word1[i] = str[i];     
	}	
	strcpy(word2, str);
	//strcat()
	char w1[100] = "saravana";
	char w2[100] = "kumar";
	for(int i = strlen(w1) + 1; i < (strlen(w1) + strlen(w2)); i++){
		int k = 0;
		w1[i] = w2[k++];
	}
	printf("%s\n", w1);
	strcat(str, " ");
        strcat(str, str1);	
	//str reverse
	printf("%s\n", str);
	int i = 0, j = strlen(str) - 1;
	while(i < j){
	  char temp = str[j];
	  str[j] = str[i];
	  str[i] = temp;
	  i++;
	  j--;
	}
	//strcmp
  	int value = strcmp("hello", "hello");
	printf("%d\n", value);	
	printf("%s\n", str);
	printf("Length without strlen function: %d\n", count);
	printf("Length using strlen function: %d\n", strlen(str));
	printf("string copy without using strcpy: %s\n", word1);
	printf("string copy with strcpy: %s\n", word2);
	printf("Concatenated string is %s\n", str);
	return 0;
}
