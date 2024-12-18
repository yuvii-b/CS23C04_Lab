#include <stdio.h>
int main(){
	char c;
	printf("Enter any of the brackets(single character) used in c: ");
	scanf("%c", &c);
	switch(c){
		case '(':
			printf("Paranthesis\n");
			break;
		case '{':
			printf("Curly Braces\n");
			break;
		case '[':
			printf("Square Brackets\n");
			break;
		case '<':
			printf("Angle Brackets\n");
			break;
		default:
			printf("Invalid input!");
	}
	return 0;
}
