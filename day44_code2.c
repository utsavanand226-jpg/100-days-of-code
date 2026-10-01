#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "madam";
    int left = 0, right = strlen(str) - 1, isPal = 1;
    while (left < right) {
        if (str[left++] != str[right--]) { isPal = 0; break; }
    }
    printf(isPal ? "Palindrome\n" : "Not palindrome\n");
    return 0;
}
