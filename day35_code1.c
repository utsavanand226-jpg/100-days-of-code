#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) return 0;
    
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    int max1 = -2147483648, max2 = -2147483648;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    
    if (max2 == -2147483648) printf("No second largest element\n");
    else printf("%d\n", max2);
    return 0;
}
