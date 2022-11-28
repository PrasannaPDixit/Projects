#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i =0, j = 0;
    int iDigit = 0;

    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }

    for(i = 1; i <= iRow+1; i++)
    {
        for(j= 1 ; j <= iCol+1; j++)
        {
            if((i % 2) != 0)
            {
                printf("%d\t",j*2);
            }
            else
            {
                printf("%d\t",(j*2) -1);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iRows = 0, iColumns = 0;

    printf("Enter Number of Rows & Columns Respectivery : ");
    scanf("%d %d",&iRows,&iColumns);
    DisplayPattern(iRows, iColumns);
    return 0;
}