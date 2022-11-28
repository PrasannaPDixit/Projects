#include<stdio.h>
#include<stdbool.h>
int EvenFactorial(int iNo)
{
    int iCnt = 0,iAns = 1;
    if(iNo==0)
    {
        return 0;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= iNo; iCnt+=2)
    {
        iAns = iAns * iCnt;
    }
    return iAns;
}

int main()
{
    int iValue =0,iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    iRet = EvenFactorial(iValue);
    printf("Even Factorial  : %d",iRet);
    
    return 0;
}