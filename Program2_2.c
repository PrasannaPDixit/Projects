//Accept one number from user and print that number of * on screen

#include <stdio.h>

void Display(int iNo)
{
    register int iCnt = 0;
    iCnt = 1;

    while(iNo >= iCnt)
    {
        printf("*\n");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}