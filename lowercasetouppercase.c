#include <stdio.h>
int main() {
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");
    if (fp1 == NULL || fp2 == NULL) return 1;
    while ((ch = fgetc(fp1)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}