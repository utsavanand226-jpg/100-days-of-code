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

    printf("Next Greater Elements: ");
    
    // Brute force approach using nested loops
    for (int i = 0; i < n; i++) {
        int next_greater = -1;
        
        // Check elements to the right of the current element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break; // Found the nearest greater element, stop searching
            }
        }

        // Print with comma-separated formatting
        if (i == 0) {
            printf("%d", next_greater);
        } else {
            printf(", %d", next_greater);
        }
    }
    printf("\n");

    return 0;
}
