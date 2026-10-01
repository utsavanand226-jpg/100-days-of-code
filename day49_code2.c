#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Mohandas Karamchand Gandhi";
    int len = strlen(name);
    int lastSpace = -1;
    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') { lastSpace = i; break; }
    }
    printf("%c", name[0]);
    for (int i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i+1] != ' ') {
            printf("%c", name[i+1]);
        }
    }
    printf(" %s\n", &name[lastSpace + 1]);
    return 0;
}
