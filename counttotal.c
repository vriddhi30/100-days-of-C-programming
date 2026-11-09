#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0, inword = 0;
    fp = fopen("info.txt", "r");
    if (fp == NULL) return 1;
    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
            inword = 0;
        else if (!inword) {
            words++;
            inword = 1;
        }
    }
    fclose(fp);
    printf("Characters = %d\nWords = %d\nLines = %d", characters, words, lines);
    return 0;
}