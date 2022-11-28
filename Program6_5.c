#include<stdio.h>
#include<stdbool.h>

float Percentage(float iNo1, float iNo2)
{
    float fAns  = 0.0f;
    if(iNo1 == 0)
    {
        return 0;
    }
    fAns = (iNo2 / iNo1)*100;
    return fAns;
}



int main()
{
    int iValue1 =0, iValue2 =0;
    float fRet = 0.0f;
    printf("Enter Total Marks: \n");
    scanf("%d",&iValue1);
    printf("Enter Obtained Marks: \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%f\n",fRet);

    return 0;
}