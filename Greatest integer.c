#include <stdio.h>
int main()
{
    int x,y,z;
    printf("enter three numbers:");
    scanf("%d %d %d", &x,&y,&z);

    if (x>y && x>z)
        {
            printf("%d is the greatest no.", x);
        }
    else if (y>z && y>x)
        {
            printf("%d is the greatest no.", y);
        }
    else
        {
            printf("%d is the greatest no.", z);
        } 
return 0;       
}