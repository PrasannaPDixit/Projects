import java.util.Scanner;

class MyArray
{
    public int Arr[];

    public MyArray(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the array elements :");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void DisplayPattern()
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] < 0)
            {
                Arr[iCnt] = -Arr[iCnt];
            }

            if(Arr[iCnt] % 2 == 0)
            {
                while(Arr[iCnt] != 0)
                {
                    System.out.print("*\t");
                    Arr[iCnt]--;
                }
                System.out.println();
            }
        }
    }
}
class Program44_5
{
    public static void main(String AR[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0;

        System.out.println("Please enter the size of array");
        
        try
        {
            iLength = sobj.nextInt();
            MyArray aobj = new MyArray(iLength);
            aobj.Accept();
            aobj.DisplayPattern();
        }
        catch(java.util.InputMismatchException obj)
        {
            System.out.println("Exception Occured : "+obj);
        }
        
    }
}