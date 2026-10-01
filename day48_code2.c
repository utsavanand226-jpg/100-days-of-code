#include <stdio.h>
#include <string.h>

void reverse(char *begin, char *end) {
    while (begin < end) {
        char temp = *begin; *begin++ = *end; *end-- = temp;
    }
}

int main() {
    char str[] = "hello world from c";
    char *word_begin = str;
    char *temp = str;
    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        } else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
    printf("Reversed words: %s\n", str);
    return 0;
}
