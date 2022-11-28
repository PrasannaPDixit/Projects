#include<stdio.h>
double Temperature(float fNo)
{
    
    return fNo * 0.0929;
}

int main()
{
    float fValue =0.0f;
    double dRet = 0.0;
    printf("Enter Area in Square feet : \n");
    scanf("%f",&fValue);
    dRet = Temperature(fValue);
    printf("Area in Square Meter: %lf",dRet);
    
    return 0;
}