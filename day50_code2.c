#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abc";
    int n = strlen(str);
    printf("Substrings:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
