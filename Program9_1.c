#include<stdio.h>
#include<stdbool.h>
void DisplayPattern(int iNo)
{
    int iCnt =0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 0 ; iCnt < iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 0 ; iCnt < iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue =0,iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    DisplayPattern(iValue);
    
    return 0;
}