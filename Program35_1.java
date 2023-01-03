import java.util.Scanner;

class StringManipulation
{
    public String StrCatX(String src, String dest, int iCnt)
    {
        char Arr1[] = src.toCharArray();
        char Arr2[] = dest.toCharArray();
        char Arr3[] = new char[src.length() + dest.length() + 1];

        if(iCnt > dest.length())
        {
            iCnt = dest.length();
        }

        for(int i = 0 ; i < Arr1.length; i++)
        {
            Arr3[i] = Arr1[i];
        }
        for(int i = 0; i<iCnt; i++)
        {
            Arr3[Arr1.length + i + 1] = Arr2[i];
        }

        src = String.valueOf(Arr3);
        return src;
    }
}

class Program35_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First String : ");
        String First = sobj.nextLine();
        
        System.out.println("Enter the Second String : ");
        String Second = sobj.nextLine();

        System.out.println("Enter the number of characters of 2nd string to be concatenated : ");
        int iNo = sobj.nextInt();

        StringManipulation smobj = new StringManipulation();
        String sRet = smobj.StrCatX(First, Second, iNo);

        System.out.println(sRet);

    }

}