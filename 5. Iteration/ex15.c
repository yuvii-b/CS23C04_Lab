#include <stdio.h>

int main(){
	char a = 'a';
	char z = 'z';
	for(int i = 0; i < 26; ++i){
		printf("%c%c ", a + i, z - i);
	}
	printf("\n");
	return 0;
}
