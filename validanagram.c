#include <stdio.h>
int main() {
    char s[100], t[100];
    int a[26] = {0}, i;
    scanf("%s%s", s, t);
    for (i = 0; s[i] != '\0'; i++) a[s[i]-'a']++;
    for (i = 0; t[i] != '\0'; i++) a[t[i]-'a']--;
    for (i = 0; i < 26; i++) {
        if (a[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}