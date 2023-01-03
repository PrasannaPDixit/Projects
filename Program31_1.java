import java.util.Scanner;

class StringManipulation
{
    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;

        for(int i = 0; i< Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
class Program31_1
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string");
        String str = sobj.nextLine();

        StringManipulation smobj = new StringManipulation();
        int iRet = smobj.CountCapital(str);

        System.out.println("Number of capital letters in "+str+" is :\n"+iRet);
    }
}