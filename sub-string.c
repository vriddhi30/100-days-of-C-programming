#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, j, k;
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++) {
        for (j = i; j < strlen(s); j++) {
            for (k = i; k <= j; k++)
                printf("%c", s[k]);
            printf("\n");
        }
    }
    return 0;
}