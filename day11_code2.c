#include <stdio.h>
int main(void)
{
    float cp, sp, percent;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);
    if (cp <= 0) {
        printf("Invalid cost price\n");
        return 0;
    }
    if (sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%\n", percent);
    } else if (cp > sp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%\n", percent);
    } else {
        printf("No profit no loss\n");
    }
    return 0;
}
