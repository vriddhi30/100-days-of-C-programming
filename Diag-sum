#include <stdio.h>

int main()
{
    int m, n;

    printf("enter size of matrix: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    printf("enter elements of matrix:\n");

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;

    if(m == n)
    {
        for(int i = 0; i < m; i++)
        {
            sum = sum + a[i][i];
        }

        printf("%d", sum);
    }
    else
    {
        printf("Matrix is not square");
    }

    return 0;
}