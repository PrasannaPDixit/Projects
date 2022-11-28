#include<stdio.h>
#include<stdbool.h>

bool CheckPresence(char * ch, char cValue)
{
    bool bFlag = false;
    while(*ch != '\0')
    {
        if(*ch == cValue)
        {
            bFlag = true;
            break;            
        }
        ch++;
    }
    return bFlag;  
}

int main()
{ 
    char cStr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a string:\n");
    scanf("%[^'\n']s",&cStr);

    printf("Enter a Character to check its presence in string:\n");
    scanf(" %c",&cValue);

    bRet = CheckPresence(cStr,cValue);
    
    if(bRet == true)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
   

    return 0;
}