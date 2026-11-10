#include <stdio.h>
enum Role {ADMIN = 1, USER, GUEST};
int main() {
    enum Role r;
    scanf("%d", &r);
    switch (r) {
        case ADMIN:
            printf("Welcome Admin");
            break;
        case USER:
            printf("Welcome User");
            break;
        case GUEST:
            printf("Welcome Guest");
            break;
        default:
            printf("Invalid Role");
    }
    return 0;
}