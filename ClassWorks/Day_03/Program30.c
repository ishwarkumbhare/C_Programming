#include<stdio.h>
#include<stdlib.h>

int main()
{   
    char sName[30];
    int iAge=0;
    float fmarks=0.0f;

    printf("Enter your Name:\n");
    scanf("%[^'\n']s",sName);  //Enter Remains in input buffer

    printf("Enter your Age:\n");
    scanf("%d",&iAge);

    printf("Enter your marks:\n");
    scanf("%f",&fmarks);

    printf("Welcome %s\n",sName);
    printf("Your Age is:%d\n",iAge);
    printf("Your marks is:%f\n",fmarks);

    return EXIT_SUCCESS;
}