#include <stdio.h>
#include <ctype.h>

int main()
{
    char x;
    printf("Enter your character");
    scanf("%c", &x);

    if (isalpha(x))
    {
        char lower_x = tolower(x);

        if (lower_x=='a' || lower_x=='e' ||lower_x=='i' || lower_x=='o'|| lower_x=='u')
        {
            printf("your charecter is a vowel");
        }
        
        else
        {
            printf("Your character is a consonant");
        }
    }

    else
    {
        printf("Invalid input! \n Please enter a character.");
    }

return 0;

}