#include <stdio.h>
#include <string.h>

void reverse_string(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        // Swap characters
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        
        left++;
        right--;
    }
}

int main() {
    char str1[] = "hello";
    char str2[] = "Python";
    
    reverse_string(str1);
    reverse_string(str2);
    
    printf("Reversed str1: %s\n", str1); // Output: olleh
    printf("Reversed str2: %s\n", str2); // Output: nohtyP
    
    return 0;
}
