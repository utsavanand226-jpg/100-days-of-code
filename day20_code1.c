#include <stdio.h>

int main() {
    int n, prod = 1, found_odd = 0;
    if (scanf("%d", &n) != 1) return 0;
    
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            prod *= digit;
            found_odd = 1;
        }
        n /= 10;
    }
    
    if (!found_odd) prod = 1;
    printf("%d\n", prod);
    return 0;
}
