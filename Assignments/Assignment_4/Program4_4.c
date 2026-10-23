#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility( int iAge)
{
   if(iAge >= 18)
   {
        printf("Eligible For voting");
   }
   else if(iAge < 0)
   {
        printf("Invalid Age");
   }
   else
   {
        printf("Not eligible For voting");
   }
}

int main()
{
    int iAge = 0;

    printf("Enter First number:");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}