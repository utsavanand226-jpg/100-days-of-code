#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    // Input string with spaces
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character until the null terminator
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        // Check if the character is an alphabet letter
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Convert to lowercase for easier comparison
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
