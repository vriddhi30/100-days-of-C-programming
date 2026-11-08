#include <stdio.h>
int main() {
    char s[200];
    int i, first = 1;
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        if (first && s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
            first = 0;
        }
        else if (!first && s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
            first = 1;
        else if (s[i] != ' ' && s[i] != '\n')
            first = 0;
    }
    printf("%s", s);
    return 0;
}