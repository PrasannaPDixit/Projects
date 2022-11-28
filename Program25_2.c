#include<stdio.h>

int CountSmall(char * ch)
{
    int iCount = 0, iSmallCnt =0;

    while(*ch != '\0')
    {
        if(*ch >= 'a' && *ch <= 'z')
        {
            iSmallCnt++;
        }
        ch++;
    }
    return iSmallCnt;
    
}
int main()
{ 
    char cValue[20];
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^'\n']s",&cValue);

    iRet = CountSmall(cValue);

    printf("Number of Small letters in string are : %d\n",iRet);

    return 0;
}