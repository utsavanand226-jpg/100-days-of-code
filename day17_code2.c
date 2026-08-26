#include <stdio.h>

int main() {
    int n, is_prime = 1;
    if (scanf("%d", &n) != 1) return 0;
    
    if (n <= 1) is_prime = 0;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    
    if (is_prime)
        printf("Prime\n");
    else
        printf("Not prime\n");
        
    return 0;
}
