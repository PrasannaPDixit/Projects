#include<stdio.h>

void Display()
{
    static char cCnt = 'A';

    if(cCnt <= 'F')
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