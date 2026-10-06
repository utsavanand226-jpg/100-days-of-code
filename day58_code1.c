#include <stdio.h>

void productExceptSelf(int* nums, int numsSize, int* answer) {
    // Step 1: Store the product of all elements to the left of index i
    answer[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Step 2: Multiply with the running product of all elements to the right of index i
    int rightProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] = answer[i] * rightProduct;
        rightProduct *= nums[i];
    }
}

int main() {
    int n;

    // Read the size of the array
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int nums[n];
    int answer[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Compute the product array
    productExceptSelf(nums, n, answer);

    // Print the output in a comma-separated fashion
    printf("Answer: ");
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", answer[i]);
        } else {
            printf(", %d", answer[i]);
        }
    }
    printf("\n");

    return 0;
}
