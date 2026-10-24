#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("UpperCase Alphabet");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("LowerCase Alphabet");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
     
}

int main()
{
    char cValue = 0;

    printf("Enter year: ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
