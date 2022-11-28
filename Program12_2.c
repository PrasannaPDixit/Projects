#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit ==0)
        {
            return true;
            break;
        }
        iNo = iNo/10; 
    }
    return false;
    
    
}

int main()
{
    int iValue =0;
    bool bRet = false;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);   

    if(bRet == true)
    {
        printf("%d has 0 in it", iValue);
    }
    else
    {
        printf("%d does not have zero in it",iValue);
    }
  
    return 0;
}