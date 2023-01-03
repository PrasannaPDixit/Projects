import java.util.Scanner;

class MyArray
{
    public int Arr1[];
    public int Arr2[];

    public MyArray(int iSize1, int iSize2)
    {
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the elements of first array");
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr1[iCnt] = sobj.nextInt();
        }

        System.out.println("Please enter the elements of Second array");
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Arr2[iCnt] = sobj.nextInt();
        }
    }

    public int ArraySummationDiff()
    {
        int iCnt = 0;
        int iSum[] = {0,0};

        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            iSum[0] = iSum[0] + Arr1[iCnt];
        }

        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            iSum[1] = iSum[1] + Arr2[iCnt];
        }
        return iSum[0] - iSum[1];
    }
}
class Program42_1
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the size of first array : ");
        int iLength1 = sobj.nextInt();

        System.out.println("Please enter the size of second array : ");
        int iLength2 = sobj.nextInt();

        MyArray mobj = null;

        try
        {
            mobj = new MyArray(iLength1, iLength2);
            
        }
        catch(NegativeArraySizeException obj)
        {
            System.out.println("Exception occured : "+ obj);
            System.out.println("Solution :- Please enter non negative range for array");
            
            System.out.println("Please enter the size of first array : ");
            iLength1 = sobj.nextInt();

            System.out.println("Please enter the size of second array : ");
            iLength2 = sobj.nextInt();

            mobj = new MyArray(iLength1, iLength2);
        }
        finally
        {
            mobj.Accept();
            int iRet = mobj.ArraySummationDiff();
            System.out.println("Difference between summation of 2 array : "+iRet);           
        }
    }
}