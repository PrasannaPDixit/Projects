#include<stdio.h>

int StrLenX(char * str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        StrLenX(++str);
    }
    return iCnt;

}
int main()
{
    char str[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%s",&str);

    iRet = StrLenX(str);

    printf("Length of string is : %d\n",iRet);

    return 0;
}