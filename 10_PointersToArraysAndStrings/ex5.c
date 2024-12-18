#include <stdio.h>

void reverse(int *arr, int size){
    for(int i = 0; i < size / 2; ++i){
        int temp = *(arr+(size - i - 1));
        *(arr+(size - i - 1)) = *(arr+i);
        *(arr+i) = temp;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5}, size = sizeof(arr) / sizeof(arr[0]);
    printf("Before reversing: \n");
    for(int i = 0; i < size; ++i){
        printf("%d ", arr[i]);
    }
    reverse(arr, size);
    printf("\nAfter reversing: \n");
    for(int i = 0; i < size; ++i){
        printf("%d ", arr[i]);
    }
    return 0;
}