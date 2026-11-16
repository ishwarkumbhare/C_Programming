/*
    Step 1:   Understand the program statement
    Step 2:   Write the algorithm
    Step 3:   Decide the programming language
    Step 4:   Write a program
    Step 5:   test the program
*/

/////////////////////////////////////
//
//  Step 1: Undersatnd the program statement
//          user is going write to enter any 2 integer
//          and we have to perform
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

//////////////////////////////////////
//
//  Function Name   :   Addition
//  Input           :   Integer , Integer   
//  Output          :   Integer
//  Description     :   Perform Addition
//  Date            :   04/10/2026
//  Author          :   Ishwar Balaji Kumbhare
//
//////////////////////////////////////


int Addition(int iNo1, int iNo2)
{
    int iAns=0;
    iAns=iNo1 + iNo2;  //Business logic

    return iAns;
}

//////////////////////////////////////
//
//  Entry Point Of The Appliction
//
//////////////////////////////////////


int main()
{   
    int iValue1=0, iValue2=0 ,iResult=0;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);

    printf("Addition is : %d\n",iResult);
    
    return 0;
}

//////////////////////////////////////
//  Step 5:   test the program
//
//  Tested Test Cases
//--------------------------------------
//  Input1  Input2  Output
//------------------------------------
//  10      11      21
//  11      0       11
//  0       11      11
//  20      -9      11
//  -9      20      11
//  -20     -11     -31
//------------------------------------
//  
//////////////////////////////////////
