#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d\n", a);
    return 0;
}
