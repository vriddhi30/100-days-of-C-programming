#include <stdio.h>
int main() {
    int n, a[100], i, x = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        x ^= a[i];
    }
    for (i = 1; i < n; i++) x ^= i;
    printf("%d", x);
    return 0;
}