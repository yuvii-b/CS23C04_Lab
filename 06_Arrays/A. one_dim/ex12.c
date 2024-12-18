#include <stdio.h>

int main(){
	int isbn[9], check, sum = 0;
	printf("Enter the isbn number:\n");
	for(int i = 0; i <= 9; ++i){
		printf("digit %d: ", (i + 1));
		scanf("%d", &isbn[i]);
	}
	check = isbn[9];
	for(int i = 0; i < 9; ++i){
		sum += (i + 1) * isbn[i];
	}
	sum %= 11;
	if(sum == check) printf("It is a valid isbn\n");
	else printf("It is an invalid isbn\n");
	return 0;
}
