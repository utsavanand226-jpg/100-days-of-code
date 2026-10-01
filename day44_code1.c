#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++; right--;
    }
    printf("Reversed: %s\n", str);
    return 0;
}
