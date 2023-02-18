#include<stdio.h>
#include<stdbool.h>

//Check Whether 1st & last bit is on or off
// 1000    0000    0000    0000    0000    0000    0000    0001
// 80000001
// 0X80000001

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iRet = 0;
    UINT iMask = 0X80000001;

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
        printf("bits at position 1st & last of %d is ON \n",iValue);
    }
    else
    {
        printf("bits at position 1st & last of %d is OFF \n",iValue);
    }

    return 0;
}