#include<stdio.h>

int FirstIndex(char * ch, char cValue)
{
    int iCnt = 0;
    while(*ch != '\0')
    {
        if(*ch == cValue)
        {  
            break;     
        }
        ch++;
        iCnt++;
    }
    if(*ch == '\0')
    {
        return -1;
    }
    return iCnt;
}

int main()
{ 
    char cStr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^'\n']s",&cStr);

    printf("Enter a Character to check its presence in string:\n");
    scanf(" %c",&cValue);

    iRet = FirstIndex(cStr,cValue);
    
    printf("Index of First occurance of %c in given string is : %d\n",cValue,iRet);
   

    return 0;
}