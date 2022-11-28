//Accept one character from user and convert case of that character

#include<stdio.h>

void DisplayConvert(char cChar)
{
    if((cChar >= 65) && (cChar < 97))
    {
        printf("%c",cChar + 32);
    }
    else
    {
        printf("%c",cChar - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
   
    return 0;
}