#include <stdio.h>
#include <string.h>

int main(){
	char word[] = "INDIA", cipher[strlen(word) + 1];
	int i = 0;
	for(; i < strlen(word); ++i){
		 cipher[i] = word[i] + 2;
	}
	cipher[i] = '\0';	
	printf("The word %s is encrypted into %s", word, cipher);
	return 0;
}
