#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *arr, sum = 0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; ++i){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("Array Elements: \n");
    for(int i = 0; i < n; ++i){
        printf("%d ", arr[i]);
    }
    printf("\nSum of elements: %d", sum);
    printf("\nAverage of elements: %.2f", avg);
    free(arr);
    return 0;
}