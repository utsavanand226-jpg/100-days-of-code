/* Q120 (File Handling)
Write a program to take a string input. Change it to sentence case.*/


#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
        else {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }
    }

    printf("Output: %s", str);

    return 0;
}
