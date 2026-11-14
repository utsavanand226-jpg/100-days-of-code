/* Q143 (Enum)
Find and print the student with the highest mark*/


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
    int i, maxIndex = 0;

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

    // Find the student with the highest marks
    for (i = 1; i < 5; i++)
    {
        if (s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    // Display student with highest marks
    printf("\n--- Student with Highest Marks ---\n");
    printf("Roll Number: %d\n", s[maxIndex].roll_no);
    printf("Name: %s\n", s[maxIndex].name);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}
