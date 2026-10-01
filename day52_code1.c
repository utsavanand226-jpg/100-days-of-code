#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1; // Search left for first occurrence
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    
    printf("Ceil Index: %d\n", findCeilIndex(arr, n, x));
    return 0;
}
