#include <stdio.h>
int main()
{
    int n,d,sum=0;
    printf("Enter your num:");
    scanf("%d", &n);

    for (int i = n; i !=0; i/=10)
    {
        int d= i % 10;
        sum=sum + (d*d*d);
    }
    if (n==sum)
    {
        printf("Its a armstrong value");
    }

    else
    {
        printf("It is not an armstrong number");
    }
    
}