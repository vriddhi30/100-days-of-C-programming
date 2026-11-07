#include <stdio.h>
int main() {
    int n, a[100], i, j, count;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (a[i] == a[j]) count++;
        }
        if (count > n / 2) {
            printf("%d", a[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}