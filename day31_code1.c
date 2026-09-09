#include <stdio.h>

int main() {
    int n, target, found_index = -1;
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found_index = i;
            break;
        }
    }
    
    if (found_index != -1) printf("Found at index %d\n", found_index);
    else printf("-1\n");
    return 0;
}
