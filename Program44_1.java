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

    public char[] Replace()
    {
        for(int iCnt = 0; iCnt < cArr.length; iCnt++)
        {
            if((cArr[iCnt] >= 'A') && (cArr[iCnt] <= 'Z'))
            {
                cArr[iCnt] = (char)(cArr[iCnt] + 'a' -'A');
            }
        }
        return cArr;
    }

}
class Program44_1
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

            char cArr[] = aobj.Replace();

            for(int iCnt = 0; iCnt < cArr.length; iCnt++)
            {
                System.out.print(cArr[iCnt]+"\t");
            }       
        }

        catch(java.util.InputMismatchException obj)
        {
            System.out.println("Excepption occured : "+obj);
            System.out.println("Please enter an Integer value to specify the size");
        }
    }
}