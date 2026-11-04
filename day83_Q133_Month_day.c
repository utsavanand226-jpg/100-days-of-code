/* Q133 (Enum)
Create an enum for months and print how many days each month has.*/

#include <stdio.h>

enum Months
{
    JANUARY = 1, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main()
{
    enum Months month;

    for (month = JANUARY; month <= DECEMBER; month++)
    {
        switch (month)
        {
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                printf("%d days\n", 31);
                break;

            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("%d days\n", 30);
                break;

            case FEBRUARY:
                printf("%d days\n", 28);
                break;
        }
    }

    return 0;
}