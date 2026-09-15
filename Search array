#include <stdio.h>

int main()
{
    int n, i, search, index = -1;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            index = i;
            break;
        }
    }

    if(index == -1)
    {
        printf("-1");
    }
    else
    {
        printf("Found at index %d", index);
    }

    return 0;
}