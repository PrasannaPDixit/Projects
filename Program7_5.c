#include<stdio.h>
#include<stdbool.h>

void DisplayMultiple(int iNo)
{
    int iCnt =0;
    iCnt = iNo;
    
    while(iCnt != (iNo*6))
    {
        printf("%d\t",iCnt);
        iCnt = iCnt + iNo;
    }
}

int main()
{
    int iValue =0;
    printf("Enter Number: \n");
    scanf("%d",&iValue);
    DisplayMultiple(iValue);
    
    return 0;
}