#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    
    long long result = 0, place = 1;
    if (n == 0) {
        printf("1\n");
        return 0;
    }
    
    while (n > 0) {
        int bit = n % 10;
        int comp = (bit == 0) ? 1 : 0;
        result += comp * place;
        place *= 10;
        n /= 10;
    }
    
    // Print leading zero if original number was 1-digit like '1' becoming '0'
    printf("%04lld\n", result); 
    return 0;
}
