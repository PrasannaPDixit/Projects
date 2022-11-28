#include<stdio.h>

void DisplayPattern(int iValue)
{
    int iCnt = 0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }
    
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        printf("%c\t",'A' + iCnt);
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