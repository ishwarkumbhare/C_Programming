#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("%d ",iCnt*2);
        iCnt ++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}