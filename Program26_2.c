#include<stdio.h>

void DisplayUpper(char * ch)
{
    while(*ch != '\0')
    {
        if(*ch >= 'a' && *ch <= 'z')
        {
            printf("%c",*ch - 32);
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

    DisplayUpper(cValue);

    return 0;
}