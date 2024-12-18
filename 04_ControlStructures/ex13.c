// calculator program
#include <stdio.h>
int main(){
  float num1, num2, result;
  char operator;
  printf("Enter number1: ");
  scanf("%f", &num1);
  printf("Enter number2: ");
  scanf("%f", &num2);
  printf("Enter the operation you want to perform(+, -, *, /, %): ");
  scanf(" %c", &operator);
  switch(operator){
	  case '+':
		  result = num1 + num2;
		  printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);
		  break;
	  case '-':
		  result = num1 - num2;
		  printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);
		  break;
	  case '*':
		  result = num1 * num2;
		  printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);
		  break;
	  case '/':
		  if(num2 == 0) printf("Zero division not possible\n");
		  else{
			result = num1 / num2;	  
			printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);
		  }
		  break;
	  case '%':
		  result = (int)num1 % (int)num2;
		  printf("%d %c %d = %d", (int)num1, operator, (int)num2, result);
		  break;
        default:
		  printf("Invalid operation, Try again!");
  }
  return 0;
}
