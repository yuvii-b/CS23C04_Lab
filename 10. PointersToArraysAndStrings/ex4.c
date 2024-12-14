#include <stdio.h>

void sort(int *arr, int size){
    for(int i = 0; i < size; ++i){
        int swapped = 0;
        for(int j = 0; j < size - i - 1; ++j){
            if(*(arr+j) > *(arr+(j+1))){
                swapped = 1;
                int temp = *(arr+(j+1));
                *(arr+(j+1)) = *(arr+j);
                *(arr+j) = temp;
            }
        }
        if(!swapped) break;
    }
}

int main(){
    int arr[] = {5, 6, 4, 2, 1, 10}, size = sizeof(arr) / sizeof(arr[0]);
    printf("BEFORE SORTING: \n");
    for(int i = 0; i < size; ++i){
        printf("%d ", arr[i]);
    }
    sort(arr, size);
    printf("\nAFTER SORTING: \n");
    for(int i = 0; i < size; ++i){
        printf("%d ", arr[i]);
    }
}