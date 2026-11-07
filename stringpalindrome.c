#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, j, flag = 1;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    j = strlen(s) - 1;
    for (i = 0; i < j; i++, j--) {
        if (s[i] != s[j]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}