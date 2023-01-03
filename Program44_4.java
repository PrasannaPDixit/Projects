import java.util.Scanner;

class ArrayReplace
{
    public char cArr[];

    public ArrayReplace(int iSize)
    {
        cArr = new char[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        for(int iCnt = 0; iCnt < cArr.length; iCnt++)
        {
            cArr[iCnt] = sobj.next().charAt(0);
        }
    }

    public int DifferenceCapSmallCnt()
    {
        int iCapCnt = 0, iSmallCnt = 0;

        for(int iCnt = 0; iCnt < cArr.length; iCnt++)
        {
            if((cArr[iCnt] >= 'A') && (cArr[iCnt] <= 'Z'))
            {
                iCapCnt++;
            }
            else if((cArr[iCnt] >= 'a') && (cArr[iCnt] <= 'z'))
            {
                iSmallCnt++;
            }
        }
        return iCapCnt-iSmallCnt;
    }

}
class Program44_4
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        
        try
        {
            System.out.println("Please enter the size of character array : ");
            int iSize = sobj.nextInt();

            System.out.println("Please enter the character array : ");

            ArrayReplace aobj = new ArrayReplace(iSize);

            aobj.Accept();

            int iRet = aobj.DifferenceCapSmallCnt();

            System.out.println("Difference between capital & small characters : "+iRet);     
        }

        catch(java.util.InputMismatchException obj)
        {
            System.out.println("Excepption occured : "+obj);
            System.out.println("Please enter an Integer value to specify the size");
        }
    }
}