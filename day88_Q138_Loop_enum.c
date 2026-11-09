/* Q138 (Enum)
Print all enum names and integer values using a loop.*/

#include <stdio.h>

enum Days
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    enum Days day;
    char *names[] = {
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY",
        "SUNDAY"
    };

    printf("Enum Names and Values:\n");

    for (day = MONDAY; day <= SUNDAY; day++)
    {
        printf("%s = %d\n", names[day - 1], day);
    }

    return 0;
}