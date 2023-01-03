import java.util.Scanner;

class Pattern
{
    public void DisplayPattern(int iRow, int iCol)
    {
        for(int i = 0; i< iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(i % 2 == 0)
                {
                    System.out.print((char)('A' + j)+"\t");
                }
                else
                {
                    System.out.print((char)('A' + j + 32)+"\t");
                }
                
            }
            System.out.println();
        }
    }
}

class Program36_2
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