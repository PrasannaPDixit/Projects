#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i =0, j = 0;

    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }

    for(i = iRow; i > 0; i--)
    {
        for(j= 0 ; j < iCol; j++)
        {
            printf("%d\t",i);
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