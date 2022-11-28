#include<stdio.h>

void DisplayPattern(int iValue)
{
    int iCnt = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
}
int main()
{
    int iNo = 0;
    printf("Enter Number : ");
    scanf("%d",&iNo);
    DisplayPattern(iNo);
    return 0;
}