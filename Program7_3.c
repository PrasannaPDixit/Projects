#include<stdio.h>
#include<stdbool.h>

void DisplaySeries(int iNo)
{
    int iCnt =0;
    
    for(iCnt =(-iNo); iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue =0;
    printf("Enter Number: \n");
    scanf("%d",&iValue);
    DisplaySeries(iValue);
    
    return 0;
}