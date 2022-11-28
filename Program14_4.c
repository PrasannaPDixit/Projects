#include<stdio.h>
#include<stdlib.h>

void DivisibleThreeFive(int iSize, int *Arr)
{
    int iCnt =0;
    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0  && Arr[iCnt] % 3 == 0)
        {
            printf("%d ",Arr[iCnt]);
        } 
    } 
}

int main()
{
    int iSize = 0, i = 0;
    int *ptr = NULL;
    printf("Enter size of Array : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter array Elements : ");
    for(i = 0; i < iSize ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    DivisibleThreeFive(iSize, ptr);
    free(ptr);
    
    return 0;
}