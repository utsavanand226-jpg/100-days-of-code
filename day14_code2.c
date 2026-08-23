#include <stdio.h>

int main() {
    int n;
    long long prod = 1;
    if (scanf("%d", &n) != 1) return 0;
    
    int found_even = 0;
    for (int i = 2; i <= n; i += 2) {
        prod *= i;
        found_even = 1;
    }
    
    if (!found_even) prod = 0;
    printf("%lld\n", prod);
    return 0;
}
