#include <stdio.h>
int main() {
    int n, a[100], x, i, first = -1, last = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            if (first == -1) first = i;
            last = i;
        }
    }
    if (first == -1) printf("-1 -1");
    else printf("%d %d\n%d %d", a[first], a[last], first, last);
    return 0;
}