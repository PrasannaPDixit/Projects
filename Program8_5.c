#include<stdio.h>
#include<stdbool.h>
void DisplayTable(int iNo)
{
    int iCnt =0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    iCnt = iNo*10;
    while(iCnt >= iNo) 
    {
        printf("%d\t",iCnt);
        iCnt-=iNo;
    }

}

int main()
{
    int iValue =0,iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    DisplayTable(iValue);
    
    return 0;
}