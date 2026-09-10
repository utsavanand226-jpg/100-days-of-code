#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    
    int freq[10] = {0};
    if (n == 0) freq[0]++;
    
    long long temp = n < 0 ? -n : n;
    while (temp > 0) {
        freq[temp % 10]++;
        temp /= 10;
    }
    
    int max_freq = 0, result_digit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            result_digit = i;
        }
    }
    printf("%d\n", result_digit);
    return 0;
}
