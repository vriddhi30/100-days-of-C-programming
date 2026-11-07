#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int d = 0; d < r + c - 1; d++)
    {
        for (i = 0; i < r; i++)
        {
            j = d - i;

            if (j >= 0 && j < c)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}