/* Q112 (Logic Enhancers)
Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.*/

#include <stdio.h>
#include <limits.h>

int kadaneMax(int arr[], int n)
{
    int currMax = arr[0];
    int maxSum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(currMax + arr[i] > arr[i])
            currMax = currMax + arr[i];
        else
            currMax = arr[i];

        if(currMax > maxSum)
            maxSum = currMax;
    }

    return maxSum;
}

int main()
{
    int n = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n] ;
    printf("Enter elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }


    printf("Maximum Subarray Sum = %d\n", kadaneMax(arr, n));

    return 0;
}