#include<stdio.h>

void DisplayRangeEven(int iNo1, int iNo2)
{
    int iCnt =0;
    
    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d ",iCnt);
        }
    }   

    

    
}

int main()
{
    int iValue1 =0,iValue2 = 0;

    printf("Enter the Range: \n");
    scanf("%d %d",&iValue1,&iValue2);
    DisplayRangeEven(iValue1,iValue2);   
    
    return 0;
}