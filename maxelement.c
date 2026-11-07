#include <stdio.h>
int main() {
    int n, a[100], k, i, j, max;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for (i = 0; i <= n-k; i++) {
        max = a[i];
        for (j = i+1; j < i+k; j++) {
            if (a[j] > max) max = a[j];
        }
        printf("%d ", max);
    }
    return 0;
}