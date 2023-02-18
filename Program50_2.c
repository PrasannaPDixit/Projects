#include<stdio.h>
#include<stdbool.h>

//Turn off 7th & 10th bit if it is on
// NUMBER : 0000    0000    0000    0000    0000    0000    0000    0000
// Mask   : 1111    1111    1111    1111    1111    1101    1011    1111
// FFFFFDBF
// 0XFFFFFDBF

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iRet = 0;
    UINT iMask = 0XFFFFFDBF;

    iRet = iMask & iNo;

    return iRet;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Updated number : %d\n",iRet);

    return 0;
}