#include<stdio.h>

int SumDigits(int iNo)
{
    static int iSum  = 0;
    if(iNo != 0)
    {
        iSum = iSum + iNo%10;
        SumDigits(iNo/10);
    }
    return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of digits of %d is : %d\n",iValue,iRet);

    return 0;
}