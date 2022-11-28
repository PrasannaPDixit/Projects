#include<stdio.h>
double Temperature(float fNo)
{
    double dAns = 0.0;
    dAns = (fNo-32);
    dAns = dAns * 5;
    dAns = dAns / 9; 
    return dAns;
}

int main()
{
    float fValue =0.0f;
    double dRet = 0.0;
    printf("Enter Temperature in fahrenheit : \n");
    scanf("%f",&fValue);
    dRet = Temperature(fValue);
    printf("Temperature in celsius: %lf",dRet);
    
    return 0;
}