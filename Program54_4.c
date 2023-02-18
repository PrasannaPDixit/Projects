#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;

    if(iCnt < iNo)
    {
        printf("%c\t",'A' + iCnt);
        iCnt++;
        Display(iNo);
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