import java.util.Scanner;

class Numbers
{
    int Arr[];

    public Numbers(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of array : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void DisplayInRange(int iStart, int iEnd)
    {
        int iCnt =0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
            {
                System.out.print(Arr[iCnt]+ "\t");
            }
        }
    }
}
class Program34_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        Numbers nobj = new Numbers(iSize);
        nobj.Accept();

        System.out.println("Enter the range to display : ");
        int iStart= sobj.nextInt();
        int iEnd= sobj.nextInt();

        nobj.DisplayInRange(iStart, iEnd);
    }

}