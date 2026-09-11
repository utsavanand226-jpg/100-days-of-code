#include <stdio.h>

int main() {
    int n, target;
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &target);
    
    int low = 0, high = n - 1, index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            index = mid;
            break;
        }
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    
    if (index != -1) printf("Found at index %d\n", index);
    else printf("-1\n");
    return 0;
}
