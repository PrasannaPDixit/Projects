#include<stdio.h>
#include<stdbool.h>

//Check Whether 7,15,21,28 bit is on or off
// 0000    1000    0001    0000    0100    0000    0100    0000
// 08104040
// 0X08104040

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iRet = 0;
    UINT iMask = 0X08104040;

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
        printf("bits at position 7,15,21,28 of %d is ON \n",iValue);
    }
    else
    {
        printf("bits at position 7,15,21,28 of %d is OFF \n",iValue);
    }

    return 0;
}