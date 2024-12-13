#include <stdio.h>
#include <math.h>

int checker(int a, int b, int c){
	if(pow(a, b) == c) return 1;
	else return 0;
}

int main(){
	int a = 7, b = 1, c = 7;
	printf("%d", checker(a, b, c));
	return 0;
}
