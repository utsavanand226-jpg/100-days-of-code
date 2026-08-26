#include <stdio.h>

int main() {
    int n, original, temp, digits = 0, sum = 0;
    if (scanf("%d", &n) != 1) return 0;
    
    original = n;
    temp = n;
    
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while (temp > 0) {
        int rem = temp % 10;
        int pow = 1;
        for (int i = 0; i < digits; i++) {
            pow *= rem;
        }
        sum += pow;
        temp /= 10;
    }
    
    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
        
    return 0;
}
