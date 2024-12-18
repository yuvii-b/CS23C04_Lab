#include <stdio.h>

int calculateTrace(int m, int arr[][m]) {
    int trace = 0;
    for (int i = 0; i < m; ++i) {
        trace += arr[i][i];
    }
    return trace;
}

int main() {
    int m;
    printf("Enter the order m of a square matrix (m <= 30): ");
    scanf("%d", &m);
    if (m > 30) {
        printf("Order should not exceed 30\n");
        return 1;
    }
    
    int arr[m][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int trace = calculateTrace(m, arr);
    printf("The trace of the matrix is %d\n", trace);
    return 0;
}
