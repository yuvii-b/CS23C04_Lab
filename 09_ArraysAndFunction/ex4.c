#include <stdio.h>

int LinearSearch(int arr[], int n, int k){
    for(int i = 0; i < n; ++i){
        if(arr[i] == k) return i;
    }
    return -1;
}

int main(){
    int arr[] = {1, 3, 4, 5, 2, 10}, key = 10, n = sizeof(arr) / sizeof(arr[0]);
    int res = LinearSearch(arr, n, key);
    if(res >= 0) printf("Target element %d is found at array index %d", key, res);
    else printf("Target element %d is not found in the array", key);
    return 0;
}
