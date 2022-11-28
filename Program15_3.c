#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPresenceEleven(int iSize, int *Arr)
{
    int iCnt =0;
    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt]  == 11)
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
    int iSize = 0, i = 0;
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

    bRet = CheckPresenceEleven(iSize, ptr);
    free(ptr);

    if(bRet == true)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is Absent\n");
    }
    return 0;
}












