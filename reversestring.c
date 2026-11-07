#include <stdio.h>
int main() {
    char s[100], t;
    int i, j = 0;
    fgets(s, sizeof(s), stdin);
    while (s[j] != '\0' && s[j] != '\n')
        j++;
    for (i = 0; i < j / 2; i++) {
        t = s[i];
        s[i] = s[j-i-1];
        s[j-i-1] = t;
    }
    s[j] = '\0';
    printf("%s", s);
    return 0;
}