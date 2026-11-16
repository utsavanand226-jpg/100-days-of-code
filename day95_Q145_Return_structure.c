/* Q145 (Enum)
Return a structure containing top student's details from a function.*/


#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

// Function to find and return the top student
struct Student findTopper(struct Student s[], int n)
{
    int i, maxIndex = 0;

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    return s[maxIndex];
}

int main()
{
    struct Student s[5], topper;
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

    // Receive the returned structure
    topper = findTopper(s, 5);

    // Display top student's details
    printf("\n--- Top Student Details ---\n");
    printf("Roll Number: %d\n", topper.roll_no);
    printf("Name: %s\n", topper.name);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
