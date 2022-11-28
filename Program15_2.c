#include<stdio.h>
#include<stdlib.h>

int CountEven(int iSize, int *Arr)
{
    int iCnt =0, iEvenCount = 0, iOddCount =0;
    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        } 
        else
        {
            iOddCount++;
        }
    } 
    return iEvenCount - iOddCount;
}

int main()
{
    int iSize = 0, i = 0, iRet = 0;
    int *ptr = NULL;
    printf("Enter size of Array : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter array Elements : ");
    for(i = 0; i < iSize ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = CountEven(iSize, ptr);
    printf("Difference in Frequency of Even & Odd  numbers is : %d",iRet);
    return 0;
}