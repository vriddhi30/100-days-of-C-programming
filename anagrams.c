#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100];
    int x[256] = {0}, i, flag = 1;
    scanf("%s%s", a, b);
    for (i = 0; a[i] != '\0'; i++)
        x[(unsigned char)a[i]]++;
    for (i = 0; b[i] != '\0'; i++)
        x[(unsigned char)b[i]]--;
    for (i = 0; i < 256; i++) {
        if (x[i] != 0)
            flag = 0;
    }
    if (flag)
        printf("Anagram");
    else
        printf("Not Anagram");
    return 0;
}