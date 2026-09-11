#include <stdio.h>

int main() {
    int n, val;
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n + 1];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &val);
    
    int i = n - 1;
    while (i >= 0 && arr[i] > val) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = val;
    
    for (int j = 0; j <= n; j++) {
        printf("%d%c", arr[j], (j == n) ? '\n' : ' ');
    }
    return 0;
}
