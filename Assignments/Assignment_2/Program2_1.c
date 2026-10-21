#include<stdio.h>

void Display(int iNo)
{
    int iCant = 0;
    iCant = 1;
    while(iCant <= iNo )
    {
        printf("* ");
        iCant++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}