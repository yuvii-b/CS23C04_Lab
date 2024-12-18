#include <stdio.h>

void sort(int arr[], int n, int I){
    int temp;
    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if((I == 0 && arr[i] > arr[j]) || (I != 0 && arr[i] < arr[j])){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int I, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for(int i = 0; i < n; ++i){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter 0 to arrange the elements in ascending order or something else for descending: ");
    scanf("%d", &I);
    sort(arr, n, I);
    printf("The arranged numbers are: \n");
    for(int i = 0; i < n; ++i){
        printf("%d ", arr[i]);
    }
    return 0;
}