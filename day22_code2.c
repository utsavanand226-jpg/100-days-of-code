#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    if (scanf("%d", &n) != 1) return 0;
    
    if (n >= 1) sum += 1.0;
    
    for (int i = 2; i <= n; i++) {
        double num = 2 * i - 1;
        double den = 2 * i - 2;
        sum += (num / den);
    }
    
    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
