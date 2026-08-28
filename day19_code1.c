#include <stdio.h>

int main() {
    int a, b, num1, num2;
    if (scanf("%d %d", &a, &b) != 2) return 0;
    
    num1 = a;
    num2 = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int hcf = a;
    int lcm = (num1 * num2) / hcf;
    
    printf("%d\n", lcm);
    return 0;
}
