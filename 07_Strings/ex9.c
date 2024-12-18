#include <stdio.h>
#include <string.h>

int main(){
	char msg[1000] = "Hello my name is Barry Allen and i am the fastest man alive!";
	float amt;
	int count = 0;
	for(int i = 0; i < strlen(msg); ++i){
		if(msg[i] == ' ') count++;
	}
	count++;
	if(count <= 10) amt = 5.0;
	else{
		count -= 10;
		amt = 5 + (1.25 * count);
	}
	printf("Amount to be paid for the telegram: %.2f", amt);
	return 0;
}
