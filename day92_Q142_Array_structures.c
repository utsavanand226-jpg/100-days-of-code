/* Q142 (Enum)
Store details of 5 students in an array of structures and print all.*/


#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i;

    // Input details of 5 students
    printf("Enter details of 5 students:\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display details of all students
    printf("\n--- Student Details ---\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
