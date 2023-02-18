#include<stdio.h>
#include<stdbool.h>

//Turn ON first 4 bits
// NUMBER : 0000    0000    0000    0000    0000    0000    0000    0000
// Mask   : 0000    0000    0000    0000    0000    0000    0000    1111
// 0000000F
// 0X0000000F

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iRet = 0;
    UINT iMask = 0X0000000F;

    iRet = iMask | iNo;

    return iRet;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    iRet = OnBit(iValue);

    printf("Updated number : %u\n",iRet);

    return 0;
}