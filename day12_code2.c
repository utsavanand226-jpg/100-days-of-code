#include <stdio.h>
int main(void)
{
    int units;
    float amt, surcharge, total;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units < 0) {
        printf("Invalid units\n");
        return 0;
    }
    if (units <= 50) {
        amt = units * 0.50f;
    } else if (units <= 150) {
        amt = 50 * 0.50f + (units - 50) * 0.75f;
    } else if (units <= 250) {
        amt = 50 * 0.50f + 100 * 0.75f + (units - 150) * 1.20f;
    } else {
        amt = 50 * 0.50f + 100 * 0.75f + 100 * 1.20f + (units - 250) * 1.50f;
    }
    surcharge = amt * 0.20f;
    total = amt + surcharge;
    printf("Electricity Bill = Rs. %.2f\n", total);
    return 0;
}
