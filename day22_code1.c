#include <stdio.h>

int main() {
    int n, original, temp, sum = 0;
    if (scanf("%d", &n) != 1) return 0;
    
    original = n;
    temp = n;
    
    while (temp > 0) {
        int digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    
    if (sum == original)
        printf("Strong number\n");
    else
        printf("Not strong number\n");
        
    return 0;
}
