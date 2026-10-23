#include<stdio.h>
#include<stdlib.h>

void FindGreater( int iFirst , int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is greater number",iFirst);
    }
    else if((iFirst < iSecond))
    {
        printf("%d is greater number",iSecond);
    }
    else
    {
        printf("numbers are qual");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter First number:");
    scanf("%d",&iValue1);

    printf("Enter Second number:");
    scanf("%d",&iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}