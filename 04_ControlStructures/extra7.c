#include <stdio.h>
int main(){
	int marks, choice;
	char grade;
	printf("Enter the marks: ");
	scanf("%d", &marks);
	choice = marks / 10;
	switch(choice){
		case 10:
		case 9:
			if(marks >= 91 && marks <= 100) grade = 'S';
			else grade = 'A';
			break;
		case 8:
			if(marks >= 81 &&  marks <= 89) grade = 'A';
			else grade = 'B';
			break;
		case 7:
		 	if(marks >= 71 && marks <= 79) grade = 'B';
			else grade = 'C';
			break;
		case 6:
			if(marks >= 61 && marks <= 69) grade = 'C';
			else grade = 'D';
			break;
		case 5:
			if(marks >= 55 && marks <= 59) grade = 'D';
			if (marks >= 50 && marks <= 54) grade = 'E';
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			grade = 'U';
			break;
	}
	printf("%c", grade);
	return 0;
}
