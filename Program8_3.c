#include<stdio.h>
#include<stdbool.h>
int Factor(int iNo)
{
    int iAns =1;

    if(iNo == 0)
    {
        return 0;
    }

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo !=0)
    {
        iAns = iAns * iNo;
        iNo--;
    }
    return iAns;
}

int main()
{
    int iValue =0,iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    iRet = Factor(iValue);
    printf("Factorial of %d is :%d",iValue,iRet);
    
    return 0;
}