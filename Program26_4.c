#include<stdio.h>

void DisplayNumbers(char * ch)
{
    while(*ch != '\0')
    {
        if(*ch >= '0' && *ch <= '9')
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

    DisplayNumbers(cValue);

    return 0;
}