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

    for(i = 0; i < iRow; i++)
    {
        
        for(j= 0 ; j < iCol; j++)
        {
            if(i == j)
            {
                printf("$\t");
            }
            else
            {
            printf("*\t");            
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