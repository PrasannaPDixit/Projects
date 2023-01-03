import java.util.Scanner;

class StringManipulation
{
    public int CountSmall(String Str)
    {
        char Arr[] = Str.toCharArray();
        int iCnt = 0;

        for(int i = 0; i< Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }

    public int CountSmallX(String Str)
    {
        int iCnt = 0;

        for(int i = 0; i< Str.length(); i++)
        {
            if(Str.charAt(i)>= 'a' && Str.charAt(i) <= 'z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
class Program31_2
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string");
        String str = sobj.nextLine();

        StringManipulation smobj = new StringManipulation();

        int iRet = smobj.CountSmall(str);
        System.out.println("Count of Small characters in "+str+" is\n"+iRet);

        iRet = smobj.CountSmallX(str);
        System.out.println("Count of Small characters in "+str+" is\n"+iRet);

    }
}