#include <stdio.h>
int main() {
    char s[100];
    int i, flag = 1;
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && flag) {
            printf("%c.", s[i]);
            flag = 0;
        }
        if (s[i] == ' ')
            flag = 1;
    }
    return 0;
}