#include<stdio.h>
#include<stdbool.h>

int CountLessThanSix(int iNo)
{
    int iDigit = 0, iCnt = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit <6)
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

    iRet = CountLessThanSix(iValue);   

    printf("Frequency of digits less than 6 in %d is :\n %d",iValue,iRet);
    return 0;
}