#include <stdio.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 0;

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int min_dim = (rows < cols) ? rows : cols;
    int is_distinct = 1;

    for (int i = 0; i < min_dim; i++) {
        for (int j = i + 1; j < min_dim; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                is_distinct = 0;
                break;
            }
        }
        if (!is_distinct) break;
    }

    if (is_distinct) printf("True\n");
    else printf("False\n");

    return 0;
}
