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

    public int[] ArrayCat()
    {
        int iCnt = 0, iIndex = 0;

        int Arr3[] = new int[Arr1.length + Arr2.length];

        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr3[iIndex] = Arr1[iCnt];
            iIndex++;
        }
        for(iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Arr3[iIndex] = Arr2[iCnt];
            iIndex++;
        }
        return Arr3;     
    }

    
}
class Program42_4
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
            int iRet[] = mobj.ArrayCat();
            System.out.println("Concatenated  array : ");

            for(int i = 0; i < iRet.length ; i++)
            {
                System.out.print(iRet[i]+"\t");
            }

        }
    }
}