#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Programming is an awesome experience";
    int maxLen = 0, currLen = 0, start = 0, maxStart = 0;
    int i = 0;
    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (currLen == 0) start = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }
        if (str[i] == '\0') break;
        i++;
    }
    printf("Longest word: ");
    for (int k = maxStart; k < maxStart + maxLen; k++) putchar(str[k]);
    printf("\n");
    return 0;
}
