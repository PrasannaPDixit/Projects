#include<stdio.h>
#include<stdbool.h>

//Check Whether 15th bit is on or off
// 0000    0000    0000    0000    0100    0000    0000    0000
// 00004000
// 0X00004000

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iRet = 0;
    UINT iMask = 0X00004000;

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
        printf("15th bit of %d is ON \n",iValue);
    }
    else
    {
        printf("15th bit of %d is OFF \n",iValue);
    }

    return 0;
}