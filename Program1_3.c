
//////////////////////////////////////////////////////////////////////////////////////////////////////
// Steps to follow while programming
//////////////////////////////////////////////////////////////////////////////////////////////////////

// Step1    Understand the problem statement
// Step2    Write an algorithm
// Step3    Decide the programming language 
// Step4    Write the program
// step5    Test the program

//////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : print 5 to 1 numbers on screen
//
// Input  : -
// Output : 5 4 3 2 1
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Algorithm
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START
        create a counter which starts from 5
        create a loop which displace negatively till 1
        print the value of counter for each iteration   
    End
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description :   To print number from 5 to 1
// Input :         Integer
// Output :        Integer
// Author :        Prasanna Prabhakarrao Dixit (2270770)
// Date :          30/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    register int iCnt = 0;

    for(iCnt = 5; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iCnt);
    }

}
int main()
{
    Display();
    return 0;
}