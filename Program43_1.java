import java.util.Scanner;

class MyArray
{
    public int Arr1[];

    public MyArray(int iSize1)
    {
        Arr1 = new int[iSize1];
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the elements of array");
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr1[iCnt] = sobj.nextInt();
        }
    }

    public int[] ReverseArray()
    {
        int iCnt = 0;
        int iTemp = 0,iDigit = 0, iRev = 0, iNo = 0;
        int iCount1 = 0, iCount2 = 0;

        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            iTemp = Arr1[iCnt];
            
            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                iRev = iRev*10 + iDigit;
                iTemp= iTemp/10;
            }
            Arr1[iCnt] = iRev;
            iRev = 0;
        }
        
        return Arr1;
    }

    
}
class Program43_1
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the size of array : ");
        int iLength1 = sobj.nextInt();

        MyArray mobj = null;

        try
        {
            mobj = new MyArray(iLength1);
            
        }
        catch(NegativeArraySizeException obj)
        {
            System.out.println("Exception occured : "+ obj);
            System.out.println("Solution :- Please enter non negative range for array");
            
            System.out.println("Please enter the size of array : ");
            iLength1 = sobj.nextInt();

            mobj = new MyArray(iLength1);
        }
        finally
        {
            mobj.Accept();
            int iRet[] = mobj.ReverseArray();

            for(int iCnt = 0; iCnt < iRet.length; iCnt++)
            {
                System.out.print(iRet[iCnt]+"\t");
            }

        }
    }
}