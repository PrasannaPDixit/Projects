#include<stdio.h>

void Display(char ch)
{
    char i ='\0';

   if(ch >= 'A' && ch <= 'Z')
   {
    for(i = ch ; i<='Z'; i++)
    {
        printf("%c\t",i);
    }
   }

   else if (ch >= 'a' && ch <= 'z')
   {
        for(i = ch ; i>='a'; i--)
        {
            printf("%c\t",i);
        }
    }

   else
   {
    return;
   }
}
int main()
{ 
    char cValue = '\0';
    
    printf("Enter a Character:\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}