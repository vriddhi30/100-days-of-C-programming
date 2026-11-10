#include <stdio.h>

enum Gender {MALE, FEMALE, OTHER};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int choice;

    scanf("%s", p.name);
    scanf("%d", &choice);

    p.gender = choice;

    printf("Name: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male");
            break;
        case FEMALE:
            printf("Gender: Female");
            break;
        case OTHER:
            printf("Gender: Other");
            break;
        default:
            printf("Invalid Gender");
    }

    return 0;
}