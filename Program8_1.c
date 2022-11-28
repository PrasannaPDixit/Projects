#include<stdio.h>
#include<stdbool.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("%d is small\n",iNo);
    }
    else if(iNo > 50 && iNo <100)
    {
        printf("%d is Medium\n",iNo);
    }
    else
    {
        printf("%d is Large\n",iNo);
    }
}

int main()
{
    int iValue =0;
    printf("Enter Number: \n");
    scanf("%d",&iValue);
    Number(iValue);
    
    return 0;
}