#include<stdio.h>

void DisplayLower(char * ch)
{
    while(*ch != '\0')
    {
        if(*ch >= 'A' && *ch <= 'Z')
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

    DisplayLower(cValue);

    return 0;
}