#include<stdio.h>

int CountDifferance(char * ch)
{
    int iCount = 0, iCapCnt = 0,iSmallCnt = 0;

    while(*ch != '\0')
    {
        if(*ch >= 'a' && *ch <= 'z')
        {
            iSmallCnt++;
        }
        else if(*ch >= 'A' && *ch <= 'Z')
        {
            iCapCnt++;
        }
        ch++;
    }
    return iSmallCnt-iCapCnt;
    
}
int main()
{ 
    char cValue[20];
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^'\n']s",&cValue);

    iRet = CountDifferance(cValue);

    printf("Difference in small & Cap letter count in string are : %d\n",iRet);

    return 0;
}