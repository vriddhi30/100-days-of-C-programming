#include <stdio.h>
int main() {
    FILE *fp;
    char name[50];
    int age;
    scanf("%s%d", name, &age);
    fp = fopen("info.txt", "w");
    if (fp == NULL) return 1;
    fprintf(fp, "Name: %s\nAge: %d", name, age);
    fclose(fp);
    printf("Data saved successfully");
    return 0;
}