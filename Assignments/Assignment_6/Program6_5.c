
#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if((fSalary <= 0) || (iYears < 0))
    {
        printf("Invalid input");
    }
    else if(iYears > 10)
    {
        fBonus = fSalary * 0.15f;
        printf("Bonus = %.2f", fBonus);
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 0.10f;
        printf("Bonus = %.2f", fBonus);
    }
    else
    {
        fBonus = fSalary * 0.05f;
        printf("Bonus = %.2f", fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter monthly salary: ");
    scanf("%f", &fSalary);

    printf("Enter years of service: ");
    scanf("%d", &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
