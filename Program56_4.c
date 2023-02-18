#include<stdio.h>

int MinDigit(int iNo)
{
    static int iMin  = 9;

    if(iNo != 0)
    {
        if((iNo % 10) < iMin)
        {
            iMin = (iNo % 10);
        }
        MinDigit(iNo/10);
    }
    return iMin;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);

    printf("Largest digit of %d is : %d\n",iValue,iRet);

    return 0;
}