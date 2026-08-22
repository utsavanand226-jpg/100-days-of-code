#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 1; i <= n; i++) {
        printf("%d%c", i, (i == n) ? '\n' : ' ');
    }
    return 0;
}
