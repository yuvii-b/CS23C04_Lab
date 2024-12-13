#include <stdio.h>
#include <string.h>

int main(){
	char word[100], result[100];
	printf("Enter a word: ");
	fgets(word, 100, stdin);
	printf("Given string: %s", word);
	for(int i = 0, j = 0; i < strlen(word); ++i){
		if(word[i] != ' '){
			result[j] = word[i];
			j++;
		}
	}
	printf("String after removing space: %s", result);
	return 0;
}
