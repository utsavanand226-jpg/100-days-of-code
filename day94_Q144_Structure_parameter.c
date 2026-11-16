
/* Q144 (Enum)
Write a function that accepts a structure as parameter and prints its members.*/
#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

// Function accepting structure as parameter
void display(struct Student s)
{
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter name: ");
    scanf("%49s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Passing structure to function
    display(s);

    return 0;
}
