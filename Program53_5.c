#include<stdio.h>

void Display()
{
    static char cCnt = 'a';

    if(cCnt <= 'f')
    {
        printf("%c\t",cCnt);
        cCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}