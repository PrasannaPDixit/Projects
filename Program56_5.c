#include<stdio.h>

int ReverseNumber(int iNo)
{
    static int iRev  = 0;

    if(iNo != 0)
    {
        iRev = iRev*10 + (iNo % 10);
        ReverseNumber(iNo/10);
    }
    return iRev;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = ReverseNumber(iValue);

    printf("Revese of %d is : %d\n",iValue,iRet);

    return 0;
}