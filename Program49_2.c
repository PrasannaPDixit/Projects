#include<stdio.h>
#include<stdbool.h>

//Check Whether 5th & 18th bit is on or off
// 0000    0000    0000    0010    0000    0000    0001    0000
// 00020010
// 0X00020010

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iRet = 0;
    UINT iMask = 0X00020010;

    iRet = iMask & iNo;

    return (iRet == iMask);
    
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("5th & 18th bit of %d is ON \n",iValue);
    }
    else
    {
        printf("5th & 18th bit of %d is OFF \n",iValue);
    }

    return 0;
}