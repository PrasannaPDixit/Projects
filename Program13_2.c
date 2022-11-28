#include<stdio.h>
#include<stdbool.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if((iDigit%2) != 0)
        {
            iCnt++;           
        }
        iNo = iNo/10; 
    }
    return iCnt;
    
    
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);   

    printf("Count of Odd digits in %d is :\n %d",iValue,iRet);
    return 0;
}