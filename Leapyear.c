#include <stdio.h>
int main()
{
    int y;
    printf("enter the year :");
    scanf("%d", &y);

    if ((y%4==0) || (y%4==0 && y%100 !=0))
    {
        printf("It is a leap year.");

    }
    else
    {
        printf("It is not a leap year");
    }
}