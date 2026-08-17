// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter a character:\n");
    scanf("%c",&c);

    if (isalpha(c))
    {
        if (isupper(c))
         {
            printf("Your charcter is an uppercase alphabet.\n");
         }
        
         else
         {
            printf("Your character is lowercase alphabet.\n");
         }
    }
        
    else
    {
        if (isdigit(c))
        {
            printf("Your character is a digit");
        }

        else 
        {
            printf("It is a special character");
        }

    }
    return 0;
}