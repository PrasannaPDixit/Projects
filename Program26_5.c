#include<stdio.h>

int CountSpaces(char * ch)
{
    int iCnt = 0;
    while(*ch != '\0')
    {
        if(*ch == ' ')
        {
            iCnt++;
        }
        ch++;
    }
    return iCnt;   
}

int main()
{ 
    char cValue[20];
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^'\n']s",&cValue);

    iRet = CountSpaces(cValue);
    printf("Number of White Spaces are : %d",iRet);

    return 0;
}