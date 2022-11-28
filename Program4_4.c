//Accept number from user and return summation of all its non factors

#include<stdio.h>

int SumNonFact(int iNo)
{
    register int iCnt = 0;
    int iFactAdd = 0;
    iCnt = 1;
    while(iCnt < iNo)
    {
        if(iNo % iCnt != 0)
        {
            iFactAdd = iFactAdd + iCnt;
        }
        iCnt++;
    }
    return iFactAdd;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Addition of the non factors of %d is : %d",iValue, iRet);

    return 0;
}