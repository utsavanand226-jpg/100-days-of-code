#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    
    long long binary = 0, place = 1;
    while (n > 0) {
        int rem = n % 2;
        binary += rem * place;
        place *= 10;
        n /= 2;
    }
    printf("%lld\n", binary);
    return 0;
}
