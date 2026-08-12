#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("%.2lf Celsius is equal to %.2lf Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
