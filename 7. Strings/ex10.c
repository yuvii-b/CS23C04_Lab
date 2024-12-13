#include <stdio.h>
#include <string.h>

int main(){
	int n;
	printf("Enter the number of names: ");
	scanf("%d", &n);
	char names[n][100], temp[100];
	for(int i = 0; i < n; ++i){
		printf("Enter name %d: ", i + 1);
		scanf("%s", names[i]);
		//fgets(names[i], 100, stdin);
	}
	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(strcmp(names[i], names[j]) > 0){
				strcpy(temp, names[j]);
				strcpy(names[j], names[i]);
				strcpy(names[i], temp);
			}
		}
	}
	printf("Alphabetical Order:\n");
	for(int i = 0; i < n; ++i){
		printf("%s ", names[i]);
	}
	return 0;
	   
}
