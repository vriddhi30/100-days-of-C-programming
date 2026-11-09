#include <stdio.h>
int main() {
    FILE *fp;
    char s[200];
    fp = fopen("info.txt", "a");
    if (fp == NULL) return 1;
    getchar();
    fgets(s, sizeof(s), stdin);
    fprintf(fp, "%s", s);
    fclose(fp);
    return 0;
}