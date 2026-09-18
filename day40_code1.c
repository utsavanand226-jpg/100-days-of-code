#include <stdio.h>

#define MAX 100

void diagonalTraversal(int matrix[MAX][MAX], int rows, int cols) {
    printf("\nDiagonal Traversal:\n");
    
    // Traverse lower-left half including the main diagonal
    for (int k = 0; k < rows; k++) {
        int i = k;
        int j = 0;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    // Traverse upper-right half
    for (int k = 1; k < cols; k++) {
        int i = rows - 1;
        int j = k;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 3;
    int matrix[MAX][MAX] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    diagonalTraversal(matrix, rows, cols);

    return 0;
}
