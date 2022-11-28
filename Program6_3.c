#include<stdio.h>
#include<stdbool.h>

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    return false;
}



int main()
{
    int iValue1 =0, iValue2 =0;
    bool bRet = false;
    printf("Enter Two Numbers : \n");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}