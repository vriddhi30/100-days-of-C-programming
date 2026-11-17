#include <stdio.h>

struct Date
{
    int day, month, year;
};

struct Employee
{
    int id;
    char name[50];
    float salary;
    struct Date joining_date;
};

int main()
{
    struct Employee e;

    printf("Enter employee ID, name and salary: ");
    scanf("%d %s %f", &e.id, e.name, &e.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joining_date.day, &e.joining_date.month, &e.joining_date.year);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n", e.joining_date.day, e.joining_date.month, e.joining_date.year);

    return 0;
}