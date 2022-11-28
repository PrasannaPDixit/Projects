#include<stdio.h>
#include<stdbool.h>
float Area(float fNo)
{
    return 3.14*fNo*fNo;
}

int main()
{
    float fValue =0.0f;
    float fRet = 0.0f;
    printf("Enter Number : \n");
    scanf("%f",&fValue);
    fRet = Area(fValue);
    printf("Area of circle  : %f",fRet);
    
    return 0;
}