import java.util.Scanner;

class StringManipulation
{
    public boolean CheckPalindrome(String str)
    {
        char Arr[] = str.toCharArray();
        boolean bFlag = false;

        int iStart = 0;
        int iEnd = (Arr.length - 1);

        while(iStart < iEnd)
        {
            if(Arr[iStart] == Arr[iEnd] || (Arr[iStart] == (char)(Arr[iEnd] + 32)) ||(Arr[iStart] == (char)(Arr[iEnd] - 32)))
            {
                bFlag = true;
            }
            else
            {
                bFlag = false;
                break;
            }
            iStart++;
            iEnd--;
        }

        return bFlag;
    }
    
}

class Program35_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String Str = sobj.nextLine();
        
        StringManipulation smobj = new StringManipulation();
        boolean bRet = smobj.CheckPalindrome(Str);

        if(bRet == true)
        {
            System.out.println(Str+" is pallindrome");
        }
        else
        {    
            System.out.println(Str+" is NOT pallindrome");
        }

        
    }

}