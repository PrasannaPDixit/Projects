//Accept number from user and display its multiplication of factors

#include<stdio.h>

int MultFact(int iNo)
{
    register int iCnt = 0;
    int iFactMult = 1;
    iCnt = 1;
    while(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
            iFactMult = iFactMult * iCnt;
        }
        iCnt++;
    }
    return iFactMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Mulriplication of the factors of %d is : %d",iValue, iRet);

    return 0;
}