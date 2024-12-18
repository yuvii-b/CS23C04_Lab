#include <stdio.h>
#define N 3

void display(int (*arr)[N], int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            printf("%d ", *(*(arr + i) + j)); // alternative if we use 1d array pointer: *(arr + i * n + j)
        }
        printf("\n");
    }
}

int main(){
    int arr[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    display(arr, N);
    return 0;   
}