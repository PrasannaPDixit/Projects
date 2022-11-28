#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Index(int iSize, int *Arr, int iNo)
{
    int iCnt =0, iCount= 0;
    for(iCnt = (iSize-1); iCnt >= 0 ; iCnt--)
    {
        if(Arr[iCnt]  == iNo)
        {
            break;
        } 
    }
    if(iCnt == 0)
    {
        return -1;
    } 
    return iCnt;
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

    printf("Enter number to find the presence: \n");
    scanf("%d",&iValue);

    iRet = Index(iSize, ptr, iValue);
    free(ptr);

    printf("%d Lastly occured at Index no : %d",iValue,iRet);
    return 0;
}












