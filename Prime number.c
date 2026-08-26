#include <stdio.h>
int main()
{
    int n;
    printf("enter your no:");
    scanf("%d",&n);

    int c=0;
    for (int i = 2; i <n; i++)
    {
        if(n%i==0 && i!=n)
        {
            c+=1;
        }

    }

    if (c==0)
    {
        printf("Given num is prime.");
    }

    else{
        printf("Num is not prime.");
    }
return 0;
}