#include<stdio.h>

void DisplayRangeReverse(int iNo1, int iNo2)
{
    int iCnt =0,iSum = 0;
    
    if( (iNo1>iNo2))
    {
        printf("Invalid Range...");
    }
    for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
    {
        printf("%d ",iCnt);
    }
}

int main()
{
    int iValue1 =0,iValue2 = 0, iRet = 0;;

    printf("Enter the Range: \n");
    scanf("%d %d",&iValue1,&iValue2);

    DisplayRangeReverse(iValue1,iValue2);   
  
    return 0;
}