#include<stdio.h>
#include<stdbool.h>

//Check Whether 7,8,9 bit is on or off
// 0000    0000    0000    0000    0000    0001    1100    0000
// 000001C0
// 0X000001C0

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iRet = 0;
    UINT iMask = 0X000001C0;

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
        printf("bits at position 7,8,9 of %d is ON \n",iValue);
    }
    else
    {
        printf("bits at position 7,8,9 of %d is OFF \n",iValue);
    }

    return 0;
}