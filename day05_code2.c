#include <stdio.h>

int main() {
    long int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%ld", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%ld seconds = %ld:%02ld:%02ld (hh:mm:ss)\n", totalSeconds, hours, minutes, seconds);

    return 0;
}
