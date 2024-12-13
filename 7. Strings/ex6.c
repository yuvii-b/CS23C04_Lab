#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(){
	char string[100] = "abc largest word", curr[100] = "", small[100] = "";
	int size = 100;
	int j = 0;
	printf("The text is: %s\n", string);
	for(int i = 0; i < strlen(string); ++i){
		if(string[i] != ' '){
			curr[j] = string[i];
	       		j++;		
		}else{
			curr[j] = '\0';
			j = 0;
			if(strlen(small) == 0) strcpy(small, curr);
			else{
				if(strlen(curr) < strlen(small)) strcpy(small, curr);
			}
		}
			
	}
	printf("The smallest word in the text is: %s", small);
	return 0;
}




