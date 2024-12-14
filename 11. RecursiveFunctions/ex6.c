#include <stdio.h>

void hanoi(int n, char f, char t, char a){
    if(n == 1){
        printf("Move disc 1 from %c to %c\n", f, t);
        return;
    }
    hanoi(n - 1, f, a, t);
    printf("Move disc %d from %c to %c\n", n, f, t);
    hanoi(n - 1, a, t, f);
}

int main(){
    int n;
    printf("Enter the number of discs: ");
    scanf("%d", &n);
    printf("Towers of Hanoi problem solution for %d discs:\n", n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}