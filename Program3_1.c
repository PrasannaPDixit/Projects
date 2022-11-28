//Accept one number from user and print that number of even numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{
    register int iCnt = 0;
    int iMult = 0;

    if(iNo <= 0 )
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = iCnt * 2;
        printf("%d ",iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}