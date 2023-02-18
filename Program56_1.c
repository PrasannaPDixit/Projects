#include<stdio.h>

int CountSpaces(char * str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        CountSpaces(++str);
    }
    return iCnt;

}
int main()
{
    char str[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",&str);

    iRet = CountSpaces(str);

    printf("Count of white spaces in string is : %d\n",iRet);

    return 0;
}