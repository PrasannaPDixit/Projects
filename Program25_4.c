#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char * ch)
{
    bool Flag = false;

    while(*ch != '\0')
    {
        if(*ch == 'a' || *ch == 'A' || *ch == 'e' || *ch == 'E' || *ch == 'i' || *ch == 'I' || *ch == 'o' || *ch == 'O' || *ch == 'u' || *ch == 'U')
        {
            Flag = true;
            break;
        }
        ch++;
    }
    return Flag;
    
}
int main()
{ 
    char cValue[20];
    bool bRet = false;

    printf("Enter a string:\n");
    scanf("%[^'\n']s",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("String contains vowels\n");
    }
    else
    {
        printf("String does NOT contain vowels\n");
    }

    return 0;
}