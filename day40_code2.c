#include <stdio.h>

#define MAX 100

int main() {
    int r1 = 2, c1 = 3;
    int r2 = 3, c2 = 2;

    int A[MAX][MAX] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[MAX][MAX] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int C[MAX][MAX] = {0};

    // Check validity
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of A must equal Rows of B.\n");
        return 0;
    }

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
