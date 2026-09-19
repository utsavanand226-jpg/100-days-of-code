#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Read string including spaces
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until the null terminator or newline character
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("Character count: %d\n", count);

    return 0;
}
