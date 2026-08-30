#include <stdio.h>

int main() {
    int n, sum = 0;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    
    if (sum == n && n > 0)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");
        
    return 0;
}
