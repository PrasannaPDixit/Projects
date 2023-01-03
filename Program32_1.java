import java.util.Scanner;

class Numbers
{
    public int Arr[];

    public Numbers(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length+" Eements");
        
        for(int iCnt = 0 ; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public int AddEvenElements()
    {
        int iEvenSum = 0;
        for(int iCnt = 0 ; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iEvenSum = iEvenSum + Arr[iCnt];
            }
        }
        return iEvenSum;
    }

    public int AddOddElements()
    {
        int iOddSum = 0;
        for(int iCnt = 0 ; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 != 0)
            {
                iOddSum = iOddSum + Arr[iCnt];
            }
        }
        return iOddSum;
    }

    public int Difference()
    {

        return AddEvenElements() - AddOddElements();
    }
    
}
class Program32_1
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array :");
        int iLength = sobj.nextInt();

        Numbers nobj = new Numbers(iLength);
        nobj.Accept();

        int iRet = nobj.AddEvenElements();
        System.out.println("Addition of Even Elements : "+iRet);

        iRet = nobj.AddOddElements();
        System.out.println("Addition of Odd Elements : "+iRet);

        iRet = nobj.Difference();
        System.out.println("Difference between ODD & EVEN Element's sum : "+iRet);


    }
}