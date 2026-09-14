#include <stdio.h>

int main() {
    int rows, cols, sum = 0;
    if (scanf("%d %d", &rows, &cols) != 2) return 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val;
            scanf("%d", &val);
            sum += val;
        }
    }
    printf("%d\n", sum);
    return 0;
}
