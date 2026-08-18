#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b, c, d, r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }
    d = b * b - 4 * a * c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("Root = %.2f\n", r1);
    } else {
        printf("Roots are imaginary (complex)\n");
        printf("Real part = %.2f\n", -b / (2 * a));
        printf("Imaginary part = %.2f\n", sqrt(-d) / (2 * a));
    }
    return 0;
}
