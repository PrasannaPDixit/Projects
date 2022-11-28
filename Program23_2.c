#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if(ch >='A' && ch<= 'Z')
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

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("%c is a capital letter\n",cValue);
    }
    else
    {
        printf("%c is not a capital letter\n",cValue);
    }

    return 0;
}