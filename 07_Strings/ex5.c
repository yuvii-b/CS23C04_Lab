#include <stdio.h>
#include <string.h>

int main(){	
	char word[100], result[100];
	printf("Enter a word: ");
	fgets(word, sizeof(word), stdin);
	int j = 0;
	for(int i = 0; i < strlen(word); ++i){
		if(word[i] >= 48 && word[i] <= 57){
			result[j++] = word[i];
		}
	}
	printf("%s", result);
	return  0;
}
