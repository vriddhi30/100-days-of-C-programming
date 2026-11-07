#include <stdio.h>
int main() {
    int n, a[100], i, j, left, right;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        left = right = 0;
        for (j = 0; j < i; j++) left += a[j];
        for (j = i + 1; j < n; j++) right += a[j];
        if (left == right) {
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}