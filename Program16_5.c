#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int MultiplyOdd(int iSize, int *Arr)
{
    int iCnt =0,iMult = 1, iCount = 0;
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] % 2 )!= 0)
        {
            iMult = iMult*Arr[iCnt];
            iCount++;
        }
        
    }
    if(iCount == 0)
    {
        return 0;
    }

    return iMult;
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

    iRet = MultiplyOdd(iSize, ptr);
    free(ptr);

    printf("Multiplication of Odd array elements : %d", iRet);

    return 0;
}












