#include<stdio.h>

void DisplayToggledString(char * ch)
{
    while(*ch != '\0')
    {
        if(*ch >= 'a' && *ch <= 'z')
        {
            printf("%c",*ch - 32);
        }
        else if(*ch >= 'A' && *ch <= 'Z')
        {
            printf("%c",*ch + 32);
        }
        else
        {
            printf("%c",*ch);
        }
        ch++;
    }
    
    
}
int main()
{ 
    char cValue[20];

    printf("Enter a string:\n");
    scanf("%[^'\n']s",&cValue);

    DisplayToggledString(cValue);

    return 0;
}