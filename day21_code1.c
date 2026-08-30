#include <stdio.h>

int main() {
    int n, temp, first, last, digits = 0, pow = 1;
    if (scanf("%d", &n) != 1) return 0;
    
    last = n % 10;
    temp = n;
    while (temp >= 10) {
        temp /= 10;
        pow *= 10;
    }
    first = temp;
    
    if (n < 10) {
        printf("%d\n", n);
        return 0;
    }
    
    int middle = (n % pow) / 10;
    int swapped = last * pow + middle * 10 + first;
    
    printf("%d\n", swapped);
    return 0;
}
