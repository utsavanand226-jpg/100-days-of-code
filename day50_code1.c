#include <stdio.h>

int main() {
    char date[] = "15/04/2026";
    int d, m, y;
    sscanf(date, "%d/%d/%d", &d, &m, &y);
    const char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    if (m >= 1 && m <= 12) {
        printf("Formatted Date: %02d-%s-%d\n", d, months[m], y);
    }
    return 0;
}
