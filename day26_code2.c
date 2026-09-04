#include <stdio.h>

int main() {
    int steps[] = {1, 3, 5, 3, 1};
    int count = sizeof(steps) / sizeof(steps[0]);
    
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < steps[i]; j++) {
            printf("*\n");
        }
        if (i < count - 1) {
            printf("\n");
        }
    }
    return 0;
}
