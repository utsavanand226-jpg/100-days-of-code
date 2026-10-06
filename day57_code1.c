#include <stdio.h>

int main() {
    int n;

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

    printf("Previous Greater Elements: ");
    
    // Brute force approach using nested loops
    for (int i = 0; i < n; i++) {
        int prev_greater = -1;
        
        // Check elements to the left of the current element (moving backwards from i - 1 to 0)
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater = arr[j];
                break; // Found the nearest greater element on the left, stop searching
            }
        }

        // Print with comma-separated formatting
        if (i == 0) {
            printf("%d", prev_greater);
        } else {
            printf(", %d", prev_greater);
        }
    }
    printf("\n");

    return 0;
}
