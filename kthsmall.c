#include <stdio.h>
int main() {
    int n, a[100], k, i, j, t;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("%d", a[k-1]);
    return 0;
}