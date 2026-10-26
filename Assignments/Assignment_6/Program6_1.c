#include<stdio.h>
#include<stdlib.h>

void CalculateElictricityBill(int iUnits)
{
    float fBill = 0.0f;
    if(iUnits < 0)
    {
        printf("Invalid input");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill is : %.2f",fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) +(( iUnits - 100) * 7);
        printf("Bill is : %.2f",fBill);
    }
    else
    {
        fBill = (100 * 5) +( 100 * 7)+ ((iUnits - 200) * 10);
        printf("Bill is : %.2f",fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter Elictricity units : ");
    scanf("%d",&iUnits);

    CalculateElictricityBill(iUnits);

    return EXIT_SUCCESS;
}