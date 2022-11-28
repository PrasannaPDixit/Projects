#include<stdio.h>
#include<stdbool.h>

bool CheckGreaterThan100(int iNo)
{
    if(iNo>100)
    {
        return true;
    }
    return false;
}



int main()
{
    int iValue =0;
    bool bRet = false;
    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    bRet = CheckGreaterThan100(iValue);

    if(iValue ==100)
    {
        printf("%d is Equal to 100\n",iValue);
    }
    else if(bRet == true)
    {
        printf("%d is greater than 100\n",iValue);
    }
    else
    {
        printf("%d is Not greater than 100\n",iValue);
    }

    return 0;
}