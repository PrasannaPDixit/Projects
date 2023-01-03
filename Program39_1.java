import java.util.Scanner;

class Pattern
{
    public void DisplayPattern(String str)
    {
        char Arr[] = str.toCharArray();

        for(int i = 1; i<Arr.length; i++)
        {
            for(int j = 0; j<i; j++)
            {
                System.out.print(Arr[j] + "\t");
            }
            for(int k = 1; k <= Arr.length - i; k++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }

    }
}

class Program39_1
{
    public static void main(String[] a)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a String");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(str);
    }
}