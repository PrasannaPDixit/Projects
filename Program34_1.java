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

    public boolean CheckPresence(int iNo)
    {
        boolean bFlag = false;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
}
class Program34_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        Numbers nobj = new Numbers(iSize);
        nobj.Accept();

        System.out.println("Enter the number to check its presence in array : ");
        int iNo= sobj.nextInt();

        boolean bRet = nobj.CheckPresence(iNo);

        if(bRet == true)
        {
            System.out.println(iNo+ " is present in array");
        }
        else
        {
            System.out.println(iNo+ " is NOT present in array");
        }
    }

}