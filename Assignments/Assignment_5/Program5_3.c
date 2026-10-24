#include<stdio.h>
#include<stdlib.h>


void DisplayGrade( float fMarks)
{
    if( (fMarks < 0) || (fMarks > 100) )
    {
        printf("Invalid marks");
    }
    else if(fMarks >= 90)
    {
        printf("Garde A");
    }
    else if(fMarks >= 75)
    {
        printf("Garde B");
    }
    else if(fMarks >= 60)
    {
        printf("Garde C");
    }
    else if(fMarks >= 40)
    {
        printf("Garde D");
    }
    else
    {
        printf("Fail");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks:");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}