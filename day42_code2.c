#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Convert lowercase characters to uppercase
    while (str[i] != '\0' && str[i] != '\n') {
        // Check if the character is a lowercase alphabet
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 from ASCII value to convert to uppercase
            str[i] = str[i] - 32;
        }
        i++;
    }

    // Print the modified string
    printf("Uppercase string: %s", str);

    return 0;
}
