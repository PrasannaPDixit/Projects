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

    for(i = 1; i <= iRow; i++)
    {
        for(j= 0 ; j < iCol; j++)
        {
            if(i%2 == 0)
            {
             printf("%c\t",'a'+j);               
            }
            else
            printf("%c\t",'A'+j);
 
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