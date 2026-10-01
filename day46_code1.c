#include <stdio.h>

int main() {
    char str[] = "programming";
    char target = 'g';
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) count++;
    }
    printf("Frequency of '%c': %d\n", target, count);
    return 0;
}
