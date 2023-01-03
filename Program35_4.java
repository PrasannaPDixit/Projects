import java.util.Scanner;

class StringManipulation
{
    public String StrRevTogX(String str)
    {
        char Arr[] = str.toCharArray();
        char cTemp;

        int iStart = 0;
        int iEnd = (Arr.length - 1);

        while(iStart <= iEnd)
        {
            if(Arr[iStart] >= 'a' && Arr[iStart] <= 'z')
            {
                Arr[iStart] = (char)(Arr[iStart] -32);
            }
            else if(Arr[iStart] >= 'A' && Arr[iStart] <= 'Z')
            {
                Arr[iStart] = (char)(Arr[iStart] + 32);
            }

            if(Arr[iEnd] >= 'a' && Arr[iEnd] <= 'z')
            {
                Arr[iEnd] = (char)(Arr[iEnd] + 'A' - 'a');
            }
            else if(Arr[iEnd] >= 'A' && Arr[iEnd] <= 'Z')
            {
                Arr[iEnd] = (char)(Arr[iEnd] + 'a' - 'A');
            }
            if(Arr[iStart] == Arr[iEnd])
            {
                if(Arr[iStart] >= 'a' && Arr[iStart] <= 'z')
                {
                    Arr[iStart] = (char)(Arr[iStart] -32);
                }
                else if(Arr[iStart] >= 'A' && Arr[iStart] <= 'Z')
                {
                    Arr[iStart] = (char)(Arr[iStart] + 32);
                }
            }

            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart++;
            iEnd--;
        }
        str = String.valueOf(Arr);

        return str;
    }
    
}

class Program35_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String Str = sobj.nextLine();
        
        StringManipulation smobj = new StringManipulation();
        String sRet = smobj.StrRevTogX(Str);

        System.out.println("Toggeled & Revesed string : \n"+sRet);

        
    }

}