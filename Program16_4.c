#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void DisplayRange(int iSize, int *Arr, int iStart, int iEnd)
{
    int iCnt =0;
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d ",Arr[iCnt]);
        } 
    }
  
}

int main()
{
    int iSize = 0, i = 0, iValue1= 0, iValue2 = 0;
    int *ptr = NULL;
    printf("Enter size of Array : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter array Elements : ");
    for(i = 0; i < iSize ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the range to display: \n");
    scanf("%d %d",&iValue1,&iValue2);

    DisplayRange(iSize, ptr, iValue1,iValue2);
    free(ptr);

    return 0;
}












