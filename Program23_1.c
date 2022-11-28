#include<stdio.h>
#include<stdbool.h>

bool CheckAlphabet(char ch)
{
    if((ch >='A' && ch<= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return true;
    }
    return false;
}
int main()
{ 
    char cValue = '\0';
    bool bRet = false;

    printf("Enter one character:\n");
    scanf("%c",&cValue);

    bRet = CheckAlphabet(cValue);

    if(bRet == true)
    {
        printf("%c is alphabet\n",cValue);
    }
    else
    {
        printf("%c is not an alphabet\n",cValue);
    }

    return 0;
}