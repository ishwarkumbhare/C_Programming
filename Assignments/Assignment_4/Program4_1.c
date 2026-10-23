#include<stdio.h>
#include<stdlib.h>

int CheckNumber( int iValue)
{
    if(iValue > 0)
    {
        printf("Positive number");
    }
    else if(iValue < 0 )
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}