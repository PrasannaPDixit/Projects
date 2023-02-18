#include<stdio.h>
#include<stdbool.h>

//Toggle 7th & 10th bit
// NUMBER : 0000    0000    0000    0000    0000    0000    0000    0000
// Mask   : 0000    0000    0000    0000    0000    0010    0100    0000
// 00000240
// 0X00000240

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iRet = 0;
    UINT iMask = 0X00000240;

    iRet = iMask ^ iNo;

    return iRet;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated number : %d\n",iRet);

    return 0;
}