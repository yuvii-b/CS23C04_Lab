#include <stdio.h>
#include <string.h>

int main(){
	char word[100], b[100];
	printf("Enter a word: ");
	fgets(word, sizeof(word), stdin);
	printf("%s\n", word);
	for(int i = 0; word[i] != '\0'; ++i){
		if(word[i] >= 97 && word[i] <= 122)
			word[i] -=  32;
		else if(word[i] >= 65 && word[i] <= 90) word[i] += 32;
	}
	printf("%s", word);
	return 0;
}
