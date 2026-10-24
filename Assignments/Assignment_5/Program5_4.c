#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int ivalue)
{
   if( (ivalue % 3) == 0 && (ivalue % 5) == 0)
   {
        printf("Divisible by both");
   }
   else if((ivalue % 3) == 0)
   {
        printf("Divisible by 3");
   }
    else if((ivalue % 5) == 0)
   {
        printf("Divisible by 5");
   }
   else
   {
        printf("Not divisible by either");
   }
}

int main()
{
    int iValue = 0;

    printf("Enter year: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
