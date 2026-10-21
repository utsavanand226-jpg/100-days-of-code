
/* Q119 (Logic Enhancers)
Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.*/

#include <stdio.h>

int main() {
    int arr[100], freq[1000] = {0};
    int n, i, repeated = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        freq[arr[i]]++;

        if (freq[arr[i]] == 2) {
            repeated = arr[i];
            break;
        }
    }

    printf("Repeated element: %d\n", repeated);

    return 0;
}