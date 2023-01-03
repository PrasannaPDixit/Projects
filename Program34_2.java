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

    public int FirstOccurence(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                break;
            }
        }
        if(iCnt < Arr.length)
        {
            return iCnt;
        }
        else
        {
            return -1;
        }
    }
}
class Program34_2
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

        int iRet = nobj.FirstOccurence(iNo);

        if(iRet == -1)
        {
            System.out.println(iNo + " is not present in array");

        }
        else
        {
            System.out.println(iNo+" Occured at index " + iRet+" for the first time");
        }
    }

}