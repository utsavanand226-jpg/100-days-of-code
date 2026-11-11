/* Q140 (Enum)
Define a struct with enum Gender and print person's gender.*/

#include <stdio.h>

enum Gender
{
    MALE = 1,
    FEMALE,
    OTHER
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    printf("Enter person's name: ");
    scanf("%49s", p.name);

    printf("Select Gender:\n");
    printf("1. Male\n");
    printf("2. Female\n");
    printf("3. Other\n");

    printf("Enter your choice: ");
    scanf("%d", (int *)&p.gender);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);

    switch (p.gender)
    {
        case MALE:
            printf("Gender: Male\n");
            break;

        case FEMALE:
            printf("Gender: Female\n");
            break;

        case OTHER:
            printf("Gender: Other\n");
            break;

        default:
            printf("Invalid Gender!\n");
    }

    return 0;
}