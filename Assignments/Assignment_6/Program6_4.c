
#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iA, int iB, int iC)
{
    if((iA > 0) && (iB > 0) && (iC > 0))
    {
        if((iA + iB > iC) &&
           (iA + iC > iB) &&
           (iB + iC > iA))
        {
            printf("Valid Triangle");
        }
        else
        {
            printf("Invalid Triangle");
        }
    }
    else
    {
        printf("Invalid Triangle");
    }
}

int main()
{
    int iSide1 = 0;
    int iSide2 = 0;
    int iSide3 = 0;

    printf("Enter first side: ");
    scanf("%d", &iSide1);

    printf("Enter second side: ");
    scanf("%d", &iSide2);

    printf("Enter third side: ");
    scanf("%d", &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}
