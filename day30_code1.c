#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        if (val % 2 == 0) even++;
        else odd++;
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
