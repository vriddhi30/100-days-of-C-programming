#include <stdio.h>
int main() {
    int n, a[100], k, i, j, found;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for (i = 0; i <= n-k; i++) {
        found = 0;
        for (j = i; j < i+k; j++) {
            if (a[j] < 0) {
                found = a[j];
                break;
            }
        }
        printf("%d ", found);
    }
    return 0;
}