#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;


UINT ToggleBit(UINT iNo, int iStart, int iEnd)
{
    UINT iRet = 0;
    UINT iMask1 = 0XFFFFFFFF;
    UINT iMask2 = 0XFFFFFFFF;
    UINT iMask = 0X00000000;

    iMask1 = iMask1 << (iStart - 1);
    iMask2 = iMask2 >> (32 - iEnd);
    iMask = iMask1 & iMask2;

    iRet = iMask ^ iNo;

    return iRet;  
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    int iPos1 = 0, iPos2 = 0;

    printf("Enter a Number : \n");
    scanf("%u",&iValue);

    printf("Enter Starting range : \n");
    scanf("%d",&iPos1);

    printf("Enter end of range : \n");
    scanf("%d",&iPos2);

    iRet = ToggleBit(iValue, iPos1, iPos2);

    printf("Updated number : %u", iRet);

    return 0;
}