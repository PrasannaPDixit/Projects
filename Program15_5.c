#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CountNumber(int iSize, int *Arr, int iNo)
{
    int iCnt =0, iCount= 0;
    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
            iCount++;
        } 
    } 
    return iCount;
}

int main()
{
    int iSize = 0, i = 0, iValue = 0;
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

    printf("Enter number to find the frequency : \n");
    scanf("%d",&iValue);

    iRet = CountNumber(iSize, ptr, iValue);
    free(ptr);

    printf("Frequency of %d  : %d",iValue,iRet);
    return 0;
}












