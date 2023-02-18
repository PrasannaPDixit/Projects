#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// check 9th & 12th bit is on or off
// 0000 0000 0000 0000 0000 0001 0000 0000
// 0000 0000 0000 0000 0000 1000 0000 0000
// 0X00000100
// 0X00000800
bool CheckBit(UINT iNo)
{
    UINT iRet1 = 0;
    UINT iRet2 = 0;
    UINT iMask1 = 0X00000100;
    UINT iMask2 = 0X00000800;
    iRet1 = iMask1 & iNo;
    iRet2 = iMask2 & iNo;

    return ((iMask1 == iRet1) || (iMask2 == iRet2));  

}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter a Number : \n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}