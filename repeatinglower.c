#include <stdio.h>
int main() {
    char s[100];
    int count[26] = {0}, i;
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (count[s[i]-'a'] == 1) {
                printf("%c", s[i]);
                return 0;
            }
            count[s[i]-'a']++;
        }
    }
    printf("No repeating character");
    return 0;
}