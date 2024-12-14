#include <stdio.h>

int smallest(int, int, int);

int main(){
    int t1, t2, t3;
    printf("Enter test1 mark: ");
    scanf("%d", &t1);
    printf("Enter test2 mark: ");
    scanf("%d", &t2);
    printf("Enter test3 mark: ");
    scanf("%d", &t3);
    int small = smallest(t1, t2, t3);
    float avg = (float)(t1 + t2 + t3 - small) / 2;
    printf("The average of two best marks: %.2f", avg);
    return 0;
}

int smallest(int a, int b, int c){
    if(a < b && a < c) return a;
    else if(b < c) return b;
    else return c;
}