#include <stdio.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 0;

    int matrix[rows][cols];
    int rowSums[rows];

    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%d%c", rowSums[i], (i == rows - 1) ? '\n' : ' ');
    }

    return 0;
}
