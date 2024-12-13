#include <stdio.h>

int main(){
	char input;
	int number, count = 0, total = 0;
	float average;
	printf("Enter the numbers: \n");
	while(1){
		printf("Number: ");
		scanf("%d", &number);
		count++;
		total += number;
		printf("press # to stop or y to continue: ");
		scanf(" %c", &input);
		if(input == '#')
			break;
	}
	printf("Sum of the entered numbers is: %d\n", total);
	average = (float)(total / count);
	printf("Average of the entered numbers is: %.2f\n", average);

	return 0;
}
