#include<stdio.h>
#include<stdbool.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCnt = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit ==2)
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

    iRet = CountTwo(iValue);   

    printf("Frequency of 2 in %d is : %d",iValue,iRet);
    return 0;
}