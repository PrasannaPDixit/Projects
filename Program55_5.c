#include<stdio.h>

int MultDigits(int iNo)
{
    static int iMult  = 1;

    if(iNo != 0)
    {
        iMult = iMult * (iNo % 10);
        MultDigits(iNo/10);
    }
    return iMult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digits of %d is : %d\n",iValue,iRet);

    return 0;
}