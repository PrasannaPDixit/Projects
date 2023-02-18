#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

void CommonONBits(UINT iNo1, UINT iNo2)
{
    UINT iRet = 0;
    int iDigit = 0;
    int iCnt = 0;

    iRet = iNo1 & iNo2;

    while(iRet != 0)
    {
        iDigit = iRet % 2;
        iCnt++;

        if(iDigit == 1)
        {
            printf("%d\t",iCnt);
        }
        iRet = iRet/2;
    }
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    UINT iRet = 0;

    printf("Enter first Number : \n");
    scanf("%u",&iValue1);

    printf("Enter second Number : \n");
    scanf("%u",&iValue2);

    CommonONBits(iValue1, iValue2);

    return 0;
}