#include<stdio.h>
#include<stdlib.h>

void FindGreater( int iFirst , int iSecond, int iThird)
{
    if((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is greater number",iFirst);
    }
    else if((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%d is greater number",iSecond);
    }
    else
    {
        printf("%d is greater number",iThird);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter First number:");
    scanf("%d",&iValue1);

    printf("Enter Second number:");
    scanf("%d",&iValue2);

     printf("Enter Third number:");
    scanf("%d",&iValue3);

    FindGreater(iValue1, iValue2,iValue3);

    return EXIT_SUCCESS;
}