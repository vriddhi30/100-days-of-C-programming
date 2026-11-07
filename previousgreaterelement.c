#include <stdio.h>
int main() {
    int n, a[100], i, j, found;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        found = -1;
        for (j = i - 1; j >= 0; j--) {
            if (a[j] > a[i]) {
                found = a[j];
                break;
            }
        }
        printf("%d", found);
        if (i < n - 1) printf(", ");
    }
    return 0;
}