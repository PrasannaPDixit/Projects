#include<stdio.h>
#include<stdlib.h>

void ThreeDigits(int iSize, int *Arr)
{
    int iCnt =0;
    int iDigit= 0, iSum = 0;
    int iTemp =0;
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        iTemp = Arr[iCnt];
        iSum = 0;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;         
        }
        printf("%d\t",iSum);
        
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












