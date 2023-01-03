import java.util.Scanner;

class StringManipulation
{
    public boolean StrNCmpX(String src, String dest, int iNo)
    {
        int iCnt = 0;

        if(src.length() <= dest.length())
        {
            iCnt = src.length();
        }
        else
        {
            iCnt = dest.length();
        }

        if(iNo > iCnt)
        {
            return false;
        }

        char Arr1[] = src.toCharArray();
        char Arr2[] = dest.toCharArray();

        boolean bFlag = true;

        for(int i = 0 ; i < iNo; i++)
        {
            if(Arr1[i] != Arr2[i])
            {
                bFlag = false;
                break;
            }
        }
        
        return bFlag;
    }
}

class Program35_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First String : ");
        String First = sobj.nextLine();
        
        System.out.println("Enter the Second String : ");
        String Second = sobj.nextLine();

        System.out.println("Enter the number of characters to be compared : ");
        int iNo = sobj.nextInt();

        StringManipulation smobj = new StringManipulation();
        boolean bRet = smobj.StrNCmpX(First, Second, iNo);

        if(bRet == true)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }

    }

}