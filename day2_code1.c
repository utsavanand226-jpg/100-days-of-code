#include <stdio.h>

#define PI 3.14159265358979323846

int main() {
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Radius: %.2lf\n", radius);
    printf("Area: %.2lf\n", area);
    printf("Circumference: %.2lf\n", circumference);

    return 0;
}
