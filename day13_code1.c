#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    if (scanf("%d %d %c", &num1, &num2, &op) != 3) return 0;
    
    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) printf("%d\n", num1 / num2);
            break;
        case '%':
            if (num2 != 0) printf("%d\n", num1 % num2);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
