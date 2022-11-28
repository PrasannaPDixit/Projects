//Accept number from user and display its factors in decresing order 

#include<stdio.h>

void FactRev(int iNo)
{
    register int iCnt = 0;
    iCnt = (iNo/2);
    while(iCnt >= 1)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ",iCnt);
        }
        iCnt--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}