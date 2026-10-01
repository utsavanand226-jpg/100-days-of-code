#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcde", str2[] = "deabc";
    char temp[200];
    if (strlen(str1) == strlen(str2)) {
        strcpy(temp, str1);
        strcat(temp, str1);
        if (strstr(temp, str2)) printf("Rotation\n");
        else printf("Not rotation\n");
    } else {
        printf("Not rotation\n");
    }
    return 0;
}
