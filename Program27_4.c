#include<stdio.h>

int LastIndex(char * ch, char cValue)
{
    int iCnt = 0, iTemp = 0;
    while(*ch != '\0' )
    {
        if(*ch == cValue)
        {  
            iTemp = iCnt;
        }
        ch++;
        iCnt++;
    }
  
    if(iTemp == 0)
    {
        return -1;
    }
    return iTemp;
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

    iRet = LastIndex(cStr,cValue);
    
    printf("Index of Last occurance of %c in given string is : %d\n",cValue,iRet);
   

    return 0;
}