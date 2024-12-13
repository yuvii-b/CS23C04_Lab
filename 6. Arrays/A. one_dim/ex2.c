#include <stdio.h>

int main(){
   int n, numbers[100], rev[100];
   printf("Enter the number of terms to enter: ");
   scanf("%d", &n);
   for(int i = 0; i < n; ++i){
	   printf("Enter term %d: ", i + 1);
	   scanf("%d", &numbers[i]);
   }
   printf("ORIGINAL ARRAY: \n");
   for(int i = 0; i < n; ++i){
	   printf("%d\t", numbers[i]);
   }
   for(int i = 0; i < n; ++i){
	   rev[n - i - 1] = numbers[i];
   }
   printf("\nREVERSED ARRAY: \n");
   for(int i = 0; i < n; ++i){
	   printf("%d\t", rev[i]);
   }
   return 0;
}
