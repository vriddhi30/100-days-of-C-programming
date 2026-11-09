#include <stdio.h>
int main() {
    FILE *fp;
    int n, sum = 0, count = 0;
    float avg;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) return 1;
    while (fscanf(fp, "%d", &n) == 1) {
        sum += n;
        count++;
    }
    fclose(fp);
    if (count > 0) {
        avg = (float)sum / count;
        printf("Sum = %d\nAverage = %.2f", sum, avg);
    }
    return 0;
}