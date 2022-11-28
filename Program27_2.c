#include<stdio.h>

int CountFrequency(char * ch, char cValue)
{
    int iCnt = 0;
    while(*ch != '\0')
    {
        if(*ch == cValue)
        {
            iCnt++;       
        }
        ch++;
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

    iRet = CountFrequency(cStr,cValue);
    
    printf("Frequency of %c in given string is : %d\n",cValue,iRet);
   

    return 0;
}