/* 
Q118 (Logic Enhancers)
Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number*/


#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d array elements: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - sum;

    printf("Missing number: %d\n", missing);

    return 0;
}
