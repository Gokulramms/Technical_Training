#include <stdio.h>

int main() {
    int n;
    printf("Enter the Matrix Size: ");
    scanf("%d", &n);
    int A[n][n];
    int i, j;
    int upper = 1, lower = 1, right = 1,left=1;

    printf("Give The Values For Matrix (%d X %d):\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i >= j && A[i][j] != 0) upper = 0;
            if (i <= j && A[i][j] != 0) lower = 0;
            if (i > j && A[i][j] != 0) right = 0;
            if (i < j && A[i][j] != 0) left = 0;
        }
    }
    if (upper){
        printf("Matrix is Upper Triangular\n");
    }else if (right) printf("Matrix is Right Diagonal Triangular\n");
    if (lower){
         printf("Matrix is Lower Triangular\n");
    }else if (left) printf("Matrix is left Diagonal Triangular\n");
    
    if (!upper && !lower && !right) printf("Matrix is NOT Triangular in any form\n");

    return 0;
}