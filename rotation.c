#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[200];
    int i;
    scanf("%s%s", a, b);
    if (strlen(a) != strlen(b)) {
        printf("Not Rotation");
        return 0;
    }
    strcpy(b + strlen(b), b);
    if (strstr(b, a))
        printf("Rotation");
    else
        printf("Not Rotation");
    return 0;
}