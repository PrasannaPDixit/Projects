#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iRet1 = 0;
    UINT iRet2 = 0;
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;

    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);

    iRet1 = iMask1 & iNo;
    iRet2 = iMask2 & iNo;

    return ((iMask1 == iRet1) || (iMask2 == iRet2));  

}

int main()
{
    UINT iValue = 0;
    bool bRet = false;
    int iPos1 = 0, iPos2 = 0;

    printf("Enter a Number : \n");
    scanf("%u",&iValue);

    printf("Enter 1st Position : \n");
    scanf("%d",&iPos1);

    printf("Enter 2nd Position : \n");
    scanf("%d",&iPos2);

    bRet = CheckBit(iValue, iPos1, iPos2);

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