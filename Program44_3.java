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

    public int CountOccurance(char cFind)
    {
        int iCount = 0;
        char cFind1 = '\u0000';

        if(cFind >= 'A' && cFind <= 'Z')
        {
            cFind1= (char)(cFind + 32);
        }
        else if(cFind >= 'a' && cFind <= 'z')
        {
            cFind1= (char)(cFind - 32);
        }

        for(int iCnt = 0; iCnt < cArr.length; iCnt++)
        {
            if(cArr[iCnt] == cFind || cArr[iCnt] == cFind1)
            {
               iCount++;
            }
        }
        return iCount;
    }

}
class Program44_3
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

            System.out.println("Please enter a charcter to count occurance : ");
            char cFind = sobj.next().charAt(0);

            int iRet = aobj.CountOccurance(cFind);

            System.out.print("Number of Occurance of " +cFind+" in given array : " +iRet);      
        }

        catch(java.util.InputMismatchException obj)
        {
            System.out.println("Excepption occured : "+obj);
            System.out.println("Please enter an Integer value to specify the size");
        }
    }
}