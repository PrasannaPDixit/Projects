#include<stdio.h>
#include<stdbool.h>

int MultDigit(int iNo)
{
    int iDigit = 0, iMult = 1;
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iMult = iMult * iDigit;
        iNo = iNo/10; 
    }
    return iMult;
    
    
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);   

    printf("Multiplication of Digits of  %d is :\n %d",iValue,iRet);
    return 0;
}