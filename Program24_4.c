#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char ch)
{
    if(!((ch >='A' && ch<= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')))
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

    bRet = CheckSpecial(cValue);

    if(bRet == true)
    {
        printf("%c is a Special Symbol\n",cValue);
    }
    else
    {
        printf("%c is not a Special symbol\n",cValue);
    }

    return 0;
}