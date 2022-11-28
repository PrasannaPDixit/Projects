#include<stdio.h>
#include<stdlib.h>

void ThreeDigits(int iSize, int *Arr)
{
    int iCnt =0;
    int iDigitCnt = 0;
    int iTemp =0;
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        iTemp = Arr[iCnt];
        iDigitCnt = 0;
        while(iTemp != 0)
        {
         iTemp = iTemp / 10;
         iDigitCnt++;
        }
        
        if(iDigitCnt == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    
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

    ThreeDigits(iSize, ptr);
    free(ptr);

    return 0;
}












