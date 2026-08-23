#include <stdio.h>

int main() {
    int n, sum = 0;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }
    printf("%d\n", sum);
    return 0;
}
