#include<stdio.h>
#include<stdbool.h>
int Distance(int iNo)
{
    return iNo*1000;
}

int main()
{
    int iValue =0;
    int iRet = 0;
    printf("Enter Distance KM : \n");
    scanf("%d",&iValue);
    iRet = Distance(iValue);
    printf("Distance in Meter  : %d",iRet);
    
    return 0;
}