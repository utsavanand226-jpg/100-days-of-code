#include <stdio.h>

// Function to find the pivot index
int findPivotIndex(int nums[], int n) {
    int totalSum = 0;
    int leftSum = 0;
    
    // Step 1: Calculate the total sum of all elements in the array
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }
    
    // Step 2: Iterate through the array and find the pivot index
    for (int i = 0; i < n; i++) {
        // rightSum is totalSum minus leftSum minus the current element
        int rightSum = totalSum - leftSum - nums[i];
        
        // If left sum equals right sum, we found our leftmost pivot index
        if (leftSum == rightSum) {
            return i;
        }
        
        // Update leftSum for the next index
        leftSum += nums[i];
    }
    
    // If no such index exists
    return -1;
}

int main() {
    // Sample Test Case 1
    int nums1[] = {1, 7, 3, 6, 5, 6};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    
    printf("Input: nums = [1, 7, 3, 6, 5, 6]\n");
    printf("Pivot Index: %d\n\n", findPivotIndex(nums1, n1)); // Output: 3
    
    // Sample Test Case 2 (No pivot)
    int nums2[] = {1, 2, 3};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    
    printf("Input: nums = [1, 2, 3]\n");
    printf("Pivot Index: %d\n", findPivotIndex(nums2, n2)); // Output: -1
    
    return 0;
}
