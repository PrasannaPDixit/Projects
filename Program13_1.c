#include<stdio.h>
#include<stdbool.h>

int CountEven(int iNo)
{
    int iDigit = 0, iCnt = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if((iDigit%2) == 0)
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

    iRet = CountEven(iValue);   

    printf("Count of even digits in %d is :\n %d",iValue,iRet);
    return 0;
}