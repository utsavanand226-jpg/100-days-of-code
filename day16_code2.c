#include <stdio.h>

int main() {
    int n, original, rev = 0;
    if (scanf("%d", &n) != 1) return 0;
    
    original = n;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    
    if (original == rev)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
        
    return 0;
}
