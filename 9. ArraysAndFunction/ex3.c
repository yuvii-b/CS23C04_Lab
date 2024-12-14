#include <stdio.h>

void read(int arr[], int n){
    printf("Enter elements: \n");
    for(int i = 0; i < n; ++i){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int n){
    printf("Array elements are: \n");
    for(int i = 0; i < n; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int Sum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; ++i){
        sum += arr[i];
    }   
    return sum;
}

float mean(int arr[], int n){
    int sum = Sum(arr, n);
    return (float) sum / n;
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n];
    read(arr, n);
    display(arr, n);
    int sum = Sum(arr, n);
    float avg = mean(arr, n);
    printf("The sum of the elements in the array: %d\n", sum);
    printf("The mean of all the elements in the array: %.2f\n", avg);
    return 0;
}