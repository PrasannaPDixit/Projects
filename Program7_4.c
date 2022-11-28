#include<stdio.h>
#include<stdbool.h>

void DisplayOddSeries(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt+=2)
    {
        printf("%d\t",iCnt);
    }
    
}

int main()
{
    int iValue =0;
    printf("Enter Number: \n");
    scanf("%d",&iValue);
    DisplayOddSeries(iValue);
    
    return 0;
}