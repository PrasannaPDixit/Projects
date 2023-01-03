import java.util.Scanner;

class MyArray
{
    public char Arr[];

    public MyArray(int iSize)
    {
        Arr = new char[iSize];
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the elements of array");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.next().charAt(0);
        }
    }

    public int CountCapital()
    {
        int iCount = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                iCount++;
            }
        }
        return iCount;
    }

    
}
class Program43_4
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0;

        System.out.println("Please enter the size of array : ");

        try
        {
            iLength = sobj.nextInt();
            MyArray mobj = null;
            mobj = new MyArray(iLength);
            mobj = new MyArray(iLength);
            mobj.Accept();
            int iRet = mobj.CountCapital();
            System.out.println("Count of Cpitals are : "+iRet); 
        }
        catch(java.util.InputMismatchException obj)
        {
            System.out.println("Exception occured : "+ obj);
            System.out.println("Solution :- Please enter integer value range for array");
        }
        catch(NegativeArraySizeException obj)
        {
            System.out.println("Exception occured : "+ obj);
            System.out.println("Solution :- Please enter non negative range for array");
        }
        
    }
}