#include<stdio.h>

void DisplayASCII()
{
    int i = 0;
    printf("_______________    ASCII TABLE______________________\n\n");
    printf("Symbol      Decimal     Hexadecimal     Octal   \n");

    for(i = 0; i<=255; i++)
    {
        printf("    %c          %d          %x          %o  \n",i,i,i,i);
    }

    printf("\n_____________________________________________________");


}
int main()
{
    DisplayASCII();

    return 0;
}