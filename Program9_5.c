#include<stdio.h>
#include<stdbool.h>
int EvenFactorial(int iNo)
{
    int iCnt = 0,iEven = 1, iOdd =1;
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
        iEven = iEven * iCnt;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt+=2)
    {
        iOdd = iOdd * iCnt;
    }


    return iEven-iOdd;
}

int main()
{
    int iValue =0,iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    iRet = EvenFactorial(iValue);
    printf("Odd Factorial  : %d",iRet);
    
    return 0;
}