#include <stdio.h>

int findMajorityElement(int nums[], int n) {
    int candidate = -1, count = 0;
    
    // Step 1: Find a candidate for the majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    // Step 2: Verify if the candidate appears more than n / 2 times
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }
    
    if (count > n / 2) {
        return candidate;
    }
    
    return -1; // No majority element exists
}

int main() {
    int n;
    
    // Taking input for size of the array
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }
    
    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int result = findMajorityElement(nums, n);
    printf("Output: %d\n", result);
    
    return 0;
}
