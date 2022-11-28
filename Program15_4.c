#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CountEleven(int iSize, int *Arr)
{
    int iCnt =0, iCount= 0;
    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt]  == 11)
        {
            iCount++;
        } 
    } 
    return iCount;
}

int main()
{
    int iSize = 0, i = 0;
    int iRet = 0;
    int *ptr = NULL;
    printf("Enter size of Array : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter array Elements : ");
    for(i = 0; i < iSize ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = CountEleven(iSize, ptr);
    free(ptr);

    printf("Frequency of 11 : %d",iRet);
    return 0;
}












