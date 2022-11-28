#include<stdio.h>

void StrRevX(char * ch)
{
    int i =0, iCnt = 0;
    char *cTemp = NULL;
    cTemp = ch;

    while(*ch != '\0')
    {
        iCnt++;
        ch++;
    }
    for(i = iCnt-1; i>=0; i--)
    {
        printf("%c",cTemp[i]);
    }
  
    
}

int main()
{ 
    char cStr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^'\n']s",&cStr);

    StrRevX(cStr);   

    return 0;
}