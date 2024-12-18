#include <stdio.h>

int smallest(int *arr, int size){
    int small = *arr;
    for(int i = 1; i < size; ++i){
        if(*(arr+i) < small) small = *(arr+i);
    }
    return small;
}

int main(){
    int arr[] = {5, 4, 3, 2, 1}, size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", smallest(arr, size));
    return 0;
}