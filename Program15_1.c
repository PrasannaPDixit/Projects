#include<stdio.h>
#include<stdlib.h>

int CountEven(int iSize, int *Arr)
{
    int iCnt =0, iEvenCount = 0;
    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        } 
    } 
    return iEvenCount;
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
    free(ptr);
    printf("Frequency of Even numbers is : %d",iRet);
    return 0;
}