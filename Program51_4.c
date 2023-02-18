#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iRet = 0;

    iMask = iMask << (iPos-1);

    iRet = iMask ^ iNo;

    return iRet;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    int iPos = 0;

    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    printf("Enter the Position of bit : \n");
    scanf("%d",&iPos);

    iRet = ToggleBit(iValue, iPos);

    printf("Updated number : %u\n",iRet);

    return 0;
}