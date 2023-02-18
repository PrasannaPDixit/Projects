#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

int CountONBits(UINT iNo)
{
    UINT iCnt = 0;
    UINT iMask = 0X00000001;

    while(iNo)
    {
        iCnt = iCnt + (iNo & iMask);
        iNo = iNo >> iMask;
    }
    return iCnt;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter a Number : \n");
    scanf("%u",&iValue);

    iRet = CountONBits(iValue);

    printf("Updated Number : %u",iRet);

    return 0;
}