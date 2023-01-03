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

    public boolean CheckPalindrome()
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
            if(iRev == Arr1[iCnt])
            {
                iCount1++;
            }
            iRev = 0;
        }
        
        for(int iCnt1 = 0, iCnt2 = (Arr1.length - 1) ; iCnt1 <iCnt2; iCnt1++, iCnt2--)
        {
            if(Arr1[iCnt1] == Arr1[iCnt2])
            {
                iCount2++;
            }
        }
                
        if(iCount1 == Arr1.length && iCount2 >= (Arr1.length/2))
        {
            return true;
        }
        return false;
    }

    
}
class Program42_5
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
            boolean bRet = mobj.CheckPalindrome();

            if(bRet == true)
            {
                System.out.println("Array is pallindrome");
            }
            else
            {
                System.out.println("Array is NOT pallindrome: ");
            }
            

        }
    }
}