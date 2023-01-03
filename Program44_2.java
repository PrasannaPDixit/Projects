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

    public int CountVovels()
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt < cArr.length; iCnt++)
        {
            if((cArr[iCnt] == 'A') || (cArr[iCnt] == 'a') || (cArr[iCnt] == 'E') || (cArr[iCnt] == 'e') || (cArr[iCnt] == 'I') || (cArr[iCnt] == 'i') || (cArr[iCnt] == 'O') || (cArr[iCnt] == 'o') || (cArr[iCnt] == 'U')|| (cArr[iCnt] == 'u'))
            {
               iCount++;
            }
        }
        return iCount;
    }

}
class Program44_2
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

            int iRet = aobj.CountVovels();

            System.out.print("Number of vovels in given character array is : "+iRet);      
        }

        catch(java.util.InputMismatchException obj)
        {
            System.out.println("Excepption occured : "+obj);
            System.out.println("Please enter an Integer value to specify the size");
        }
    }
}