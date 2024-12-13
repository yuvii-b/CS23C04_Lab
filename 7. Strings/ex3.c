#include <stdio.h>
#include <string.h>

int main(){
	char word[100];
	int vowels = 0, consonants = 0, spaces = 0;
	printf("Enter a text: ");
	fgets(word, 100, stdin);
	for(int i = 0; word[i] != '\0'; i++){
	       if(word[i] == ' ') spaces++;
	       else{
	       	switch(word[i]){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				vowels++;
				break;
			default:
				consonants++;
		   }
	       }      
	}	
	printf("%d %d %d", vowels, spaces, consonants);
	return 0;
}
