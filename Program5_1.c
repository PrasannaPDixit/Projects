//Accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    register int iCnt = 0;
    int iFactSum = 0;    //for calculation of factors
    int iNonFactSum = 0; //for calculation of Non factors
    int iSumDiff = 0;    //for storing differece between iFactSum & iNonFactSum
    iCnt = 1;
    while(iCnt < iNo)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
        iCnt++;
    }
    iSumDiff = iFactSum - iNonFactSum;

    return iSumDiff;    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference between Addition of Factors and non factors  of %d is : %d",iValue, iRet);

    return 0;
}