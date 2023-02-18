#include<stdio.h>
#include<stdbool.h>


//Toggle First & last Nibble of number
// 1111 0000 0000 0000 0000 0000 0000 1111
// F000000F
// 0XF000000F
typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
    UINT iMask = 0XF000000F;
    UINT iRet = 0;

    iRet = iMask ^ iNo;

    return iRet;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the Number : \n");
    scanf("%u",&iValue);

    iRet = ToggleNibble(iValue);

    printf("Updated number : %u\n",iRet);

    return 0;
}