import java.util.Scanner;

class Pattern
{
    public void DisplayPattern(int iRow, int iCol)
    {
        for(int i = 1; i<= iRow; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                if((i+j) == (iRow+1))
                {
                    System.out.print("#\t");
                }
                else if((i+j) <= iRow)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("@\t");
                }
            }
            System.out.println();
        }
        
    }
}

class Program40_2
{
    public static void main(String[] a)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        int iRow = sobj.nextInt();
        System.out.println("Enter the number of Columns");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(iRow, iCol);
    }
}