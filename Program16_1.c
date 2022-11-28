#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int iSize, int *Arr, int iNo)
{
    int iCnt =0, iCount= 0;
    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
            break;
        } 
    } 
    if(iCnt == iSize)
    {
        return false;
    }
    return true;
}

int main()
{
    int iSize = 0, i = 0, iValue = 0;
    bool bRet = false;
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

    bRet = CheckNumber(iSize, ptr, iValue);
    free(ptr);

    if(bRet == true)
    {
        printf("%d is present in array\n",iValue);
    }
    else
    {
        printf("%d is not present\n",iValue);
    }

    return 0;
}












