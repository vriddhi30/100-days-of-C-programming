#include <stdio.h>
int main() {
    FILE *fp1, *fp2;
    char source[100], destination[100];
    int ch;
    scanf("%s%s", source, destination);
    fp1 = fopen(source, "r");
    if (fp1 == NULL) return 1;
    fp2 = fopen(destination, "w");
    if (fp2 == NULL) {
        fclose(fp1);
        return 1;
    }
    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}