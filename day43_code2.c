#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(const char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    const char *str1 = "racecar";
    const char *str2 = "hello";
    
    printf("\"%s\" is palindrome? %s\n", str1, is_palindrome(str1) ? "True" : "False");
    printf("\"%s\" is palindrome? %s\n", str2, is_palindrome(str2) ? "True" : "False");
    
    return 0;
}
