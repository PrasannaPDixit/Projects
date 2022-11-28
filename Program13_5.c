#include<stdio.h>
#include<stdbool.h>

int SumDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0,iOddSum = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if((iDigit % 2) == 0)
        {
            iEvenSum= iEvenSum + iDigit;
        }
        else
        {
           iOddSum= iOddSum + iDigit;

        }
        iNo = iNo/10; 
    }
    return iEvenSum - iOddSum;
    
    
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet = SumDiff(iValue);   

    printf("Difference in even odd digits of %d is :\n %d",iValue,iRet);
    return 0;
}