#include <stdio.h>
int main() {
    int n, a[100], ans[100], i, j, product;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        product = 1;
        for (j = 0; j < n; j++) {
            if (i != j) product *= a[j];
        }
        ans[i] = product;
    }
    for (i = 0; i < n; i++) printf("%d ", ans[i]);
    return 0;
}