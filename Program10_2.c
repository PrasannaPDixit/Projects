#include<stdio.h>
#include<stdbool.h>
float Area(float fNo1, float fNo2)
{
    return fNo1*fNo2;
}

int main()
{
    float fValue1 =0.0f,fValue2 = 0.0f;
    float fRet = 0.0f;
    printf("Enter Width & heigth : \n");
    scanf("%f %f",&fValue1,&fValue2);
    fRet = Area(fValue1, fValue2);
    printf("Area of Rectange  : %f",fRet);
    
    return 0;
}