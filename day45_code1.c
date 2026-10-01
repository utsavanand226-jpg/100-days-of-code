#include <stdio.h>

int main() {
    char str[] = "Hello World! 123 @#";
    int spaces = 0, digits = 0, specials = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') spaces++;
        else if (str[i] >= '0' && str[i] <= '9') digits++;
        else if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) specials++;
    }
    printf("Spaces: %d, Digits: %d, Specials: %d\n", spaces, digits, specials);
    return 0;
}
