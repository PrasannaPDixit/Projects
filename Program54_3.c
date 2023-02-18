#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        iCnt++;
        Display(iNo);
        iCnt--;
        printf("%d\t",iCnt);
       
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the limit : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}