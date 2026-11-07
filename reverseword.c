#include <stdio.h>
int main() {
    char s[200], t;
    int i = 0, j;
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0') {
        while (s[i] == ' ')
            i++;
        j = i;
        while (s[j] != ' ' && s[j] != '\0' && s[j] != '\n')
            j++;
        int k;
        for (k = i; k < (i+j)/2; k++) {
            t = s[k];
            s[k] = s[j-1-(k-i)];
            s[j-1-(k-i)] = t;
        }
        i = j;
    }
    printf("%s", s);
    return 0;
}