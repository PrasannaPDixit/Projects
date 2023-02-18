#include<stdio.h>

int MaxDigit(int iNo)
{
    static int iMax  = 0;

    if(iNo != 0)
    {
        if((iNo % 10) > iMax)
        {
            iMax = (iNo % 10);
        }
        MaxDigit(iNo/10);
    }
    return iMax;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = MaxDigit(iValue);

    printf("Largest digit of %d is : %d\n",iValue,iRet);

    return 0;
}