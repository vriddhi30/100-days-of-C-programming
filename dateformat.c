#include <stdio.h>
int main() {
    int d, m, y;
    char month[4] = "Apr";
    scanf("%d/%d/%d", &d, &m, &y);
    if (m == 4)
        printf("%02d-%s-%d", d, month, y);
    return 0;
}