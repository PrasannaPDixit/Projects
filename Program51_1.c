#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iRet = 0;

    iMask = iMask << (iPos-1);

    iRet = iMask & iNo;

    return (iRet == iMask);
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;
    int iPos = 0;

    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    printf("Enter the Position of bit : \n");
    scanf("%d",&iPos);

    bRet = CheckBit(iValue, iPos);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}