/* Q137 (Enum)
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.*/

#include <stdio.h>

enum Role
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    enum Role role;
    int choice;

    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    role = choice;

    switch (role)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have read-only access.\n");
            break;

        default:
            printf("Invalid role!\n");
    }

    return 0;
}