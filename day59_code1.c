#include <stdio.h>

// Function to find the maximum sum of a subarray of size k
long long maxSubarraySum(int arr[], int n, int k) {
    if (n < k || k <= 0) {
        return -1; // Invalid case
    }

    long long current_sum = 0;
    
    // Step 1: Compute the sum of the first window of size k
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    long long max_sum = current_sum;

    // Step 2: Slide the window across the rest of the array
    for (int i = k; i < n; i++) {
        // Add the next element in the window and subtract the first element of the previous window
        current_sum += arr[i] - arr[i - k];
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

int main() {
    int n, k;

    // Read the size of the array
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the size of the subarray k
    printf("Enter the value of k: ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        printf("Invalid value of k.\n");
        return 0;
    }

    long long result = maxSubarraySum(arr, n, k);
    printf("Output: %lld\n", result);

    return 0;
}
