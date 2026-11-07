#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, flag = 1, last = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ')
            last = i + 1;
    }
    flag = 1;
    for (i = 0; i < last - 1; i++) {
        if (s[i] != ' ' && flag) {
            printf("%c.", s[i]);
            flag = 0;
        }
        if (s[i] == ' ')
            flag = 1;
    }
    printf("%s", s + last);
    return 0;
}