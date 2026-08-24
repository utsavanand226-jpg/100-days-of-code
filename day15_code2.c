#include <stdio.h>

int main() {
    int n, rev = 0;
    if (scanf("%d", &n) != 1) return 0;
    
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    printf("%d\n", rev);
    return 0;
}
