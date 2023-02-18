#include<stdio.h>

int CountSmall(char * str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        CountSmall(++str);
    }
    return iCnt;

}
int main()
{
    char str[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",&str);

    iRet = CountSmall(str);

    printf("Count of small case characters in string is : %d\n",iRet);

    return 0;
}