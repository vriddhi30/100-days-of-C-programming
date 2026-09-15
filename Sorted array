#include <stdio.h>

int main()
{
    int a[100], n, element, pos, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    
    pos = 0;
    while (pos < n && a[pos] < element)
    {
        pos++;
    }

    
    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    
    a[pos] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}