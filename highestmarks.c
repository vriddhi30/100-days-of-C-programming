#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s[5];
    int i, max = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter name, roll number and marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for(i = 1; i < 5; i++)
    {
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[max].name);
    printf("Roll Number: %d\n", s[max].roll_no);
    printf("Marks: %.2f\n", s[max].marks);

    return 0;
}S