#include <stdio.h>
int main(){
	char color;
	printf("Enter a color from the rainbow: ");
	scanf("%c", &color);
	printf("The subsequent colors from %c are: \n", color);
	switch(color){
		case 'V':
			printf("Violet\n");
		case 'I':
			printf("Indigo\n");
		case 'B':
			printf("Blue\n");
		case 'G':
			printf("Green\n");
		case 'Y':
			printf("Yellow\n");
		case 'O':
			printf("Orange\n");
		case 'R':
			printf("Red\n");
			break;
		default:
			printf("Invaid color entered!");
	}
	return 0;
}
