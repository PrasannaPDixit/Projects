#include<stdio.h>
#include<stdlib.h>

int SmallestNumber(int iSize, int *Arr)
{
    int iCnt =0;
    int iSmall = Arr[0];
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
        
    }

    return iSmall;
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

    iRet = SmallestNumber(iSize, ptr);
    free(ptr);

    printf("Smallest Number is : %d", iRet);

    return 0;
}












