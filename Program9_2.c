#include<stdio.h>
#include<stdbool.h>
int DollertoInr(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue =0,iRet = 0;
    printf("Enter Amount in USD : \n");
    scanf("%d",&iValue);
    iRet = DollertoInr(iValue);
    printf("Value of INR is : %d",iRet);
    
    return 0;
}