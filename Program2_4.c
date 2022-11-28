//Accept 2 numbers from user and display first number in second number of times

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    register int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    printf("Enter Frequency :");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}