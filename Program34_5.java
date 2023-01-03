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

    public int OddProduct()
    {
        int iCnt =0,iMult = 1;
        int iCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iMult = iMult * Arr[iCnt];
                iCount++;
            }
        }
        if(iCount == 0)
        {
            return 0;
        }
        return iMult;
    }
}
class Program34_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        Numbers nobj = new Numbers(iSize);
        nobj.Accept();

        int iRet = nobj.OddProduct();
        System.out.println("Product of Odd elements in array is :  "+iRet);

    }

}