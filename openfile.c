#include <stdio.h>
int main() {
    FILE *fp;
    char s[200];
    fp = fopen("info.txt", "r");
    if (fp == NULL) return 1;
    while (fgets(s, sizeof(s), fp) != NULL)
        printf("%s", s);
    fclose(fp);
    return 0;
}