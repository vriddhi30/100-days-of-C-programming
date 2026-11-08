#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int i, j, count, max = 0;
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++) {
        int seen[256] = {0};
        count = 0;
        for (j = i; s[j] != '\0'; j++) {
            if (seen[(unsigned char)s[j]]) break;
            seen[(unsigned char)s[j]] = 1;
            count++;
        }
        if (count > max) max = count;
    }
    printf("%d", max);
    return 0;
}