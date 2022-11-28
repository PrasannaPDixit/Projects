#include<stdio.h>
#include<stdlib.h>

int SumDiff(int iSize, int *Arr)
{
    int iCnt =0, iEvenSum = 0, iOddSum = 0;
    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    return iEvenSum - iOddSum;
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

    iRet = SumDiff(iSize, ptr);
    free(ptr);
    printf("Difference between summation of even & odd No : %d",iRet);

    return 0;
}