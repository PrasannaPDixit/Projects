import java.util.Scanner;

class StringManipulation
{
    public boolean StrCmpX(String src, String dest)
    {
        if(src.length() != dest.length())
        {
            return false;
        }

        char Arr1[] = src.toCharArray();
        char Arr2[] = dest.toCharArray();

        boolean bFlag = true;

        for(int i = 0 ; i < Arr1.length; i++)
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

class Program35_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First String : ");
        String First = sobj.nextLine();
        
        System.out.println("Enter the Second String : ");
        String Second = sobj.nextLine();

        StringManipulation smobj = new StringManipulation();
        boolean bRet = smobj.StrCmpX(First, Second);

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