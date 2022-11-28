#include<stdio.h>

int CountCapital(char * ch)
{
    int iCount = 0, iCapCnt =0;

    while(*ch != '\0')
    {
        if(*ch >= 'A' && *ch <= 'Z')
        {
            iCapCnt++;
        }
        ch++;
    }
    return iCapCnt;
    
}
int main()
{ 
    char cValue[20];
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^'\n']s",&cValue);

    iRet = CountCapital(cValue);

    printf("Number of Capital letters in string are : %d",iRet);

    return 0;
}