/*
    Step 1:   Understand the program statement
    Step 2:   Write the algorithm
    Step 3:   Decide the programming language
    Step 4:   Write a program
    Step 5:     test the program
*/

/////////////////////////////////////
//
//  Step 1: Undersatnd the program statement
//          user is going write to enter any integer
//
//
/////////////////////////////////////
// Step 2: Write the algorim
/////////////////////////////////////
//   Start
//       Accpet first nunmber as No1
//        Accpet second nunmber as No2
//       Create the variable as Ans to store the result
//        perform the addition and store  into result
//
/////////////////////////////////////
//     Step 3:   Decide the programming language
//               We select c programming
///////////////////////////////////////
// 
//Step 4:   Write a program
//
//////////////////////////////////////

#include<stdio.h>

int main()
{   
    int iValue1=0, iValue2=0 ,iResult=0;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;  //Business logic

    printf("Addition is : %d\n",iResult);
    
    return 0;
}