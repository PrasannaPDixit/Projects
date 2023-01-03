import java.util.Scanner;

class Pattern
{
    public void DisplayPattern(int iRow, int iCol)
    {
        for(int i = 1; i<= iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print((char)('A' + j)+"\t");
            }
            System.out.println();
        }
    }
}

class Program36_1
{
    public static void main(String[] a)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        int iFirst = sobj.nextInt();

        System.out.println("Enter the number of columns");
        int iLast = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(iFirst, iLast);
    }
}