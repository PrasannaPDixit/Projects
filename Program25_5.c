#include<stdio.h>

void DisplayReverse(char * ch)
{
    int i =0;

    while(*ch != '\0')
    {
        i++;
        ch++;
    }
    ch--;
    while(i >= 0)
    {
        printf("%c",*ch);
        ch--;
        i--;
    }
    
}
int main()
{ 
    char cValue[20];

    printf("Enter a string:\n");
    scanf("%[^'\n']s",&cValue);

    DisplayReverse(cValue);

    return 0;
}