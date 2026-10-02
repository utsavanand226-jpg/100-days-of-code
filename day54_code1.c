#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    // Read the positive integer n
    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }
    
    // Calculate the total sum from 1 to n
    int total_sum = n * (n + 1) / 2;
    
    // Find the integer square root of the total sum
    int x = (int)sqrt(total_sum);
    
    // Check if x squared equals the total sum
    if (x * x == total_sum) {
        printf("The pivot integer x is: %d\n", x);
    } else {
        printf("No pivot integer exists: -1\n");
    }
    
    return 0;
}
