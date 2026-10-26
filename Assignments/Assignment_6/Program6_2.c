#include<stdio.h>
#include<stdlib.h>

void CheckAddmission(float fMarks, int iAge)
{
    if((iAge > 0) && (fMarks >= 0 ) && (fMarks <= 100))
    {
        if((fMarks >= 60) && (iAge >=17))
        {
            printf("Eligible for addmission");
        }
        else
        {
            printf("Not eligible for addmission");
        }
    }
    else
    {
        printf("Invalid input");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks : ");
    scanf("%f",&fMarks);

    printf("Enter Age : ");
    scanf("%d",&iAge);

    CheckAddmission(fMarks,iAge);

    return EXIT_SUCCESS;
}