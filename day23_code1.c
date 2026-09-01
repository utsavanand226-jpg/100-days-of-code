#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 1; i <= n; i++) {
        double num = 2 * i;
        double den = 4 * i - 1;
        sum += (num / den);
    }
    
    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
