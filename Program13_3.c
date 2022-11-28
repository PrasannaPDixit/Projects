#include<stdio.h>
#include<stdbool.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if((iDigit >3) && (iDigit < 7))
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

    iRet = CountRange(iValue);   

    printf("Count of digits between 3 to 7 in %d is :\n %d",iValue,iRet);
    return 0;
}