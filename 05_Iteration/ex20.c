#include <stdio.h>

int main(){
	int n1, n2;
	printf("Enter the starting and ending limits: ");
	scanf("%d %d", &n1, &n2);
	for(int i = n1; i <= n2; ++i){
		int set = 1;
		if(i == 0 || i == 1) set = 0;
		for(int j = 2; j < i; ++j)
			if(i % j == 0) set = 0;
		if(set) printf("%d\n", i);
		}
	return 0;
}
