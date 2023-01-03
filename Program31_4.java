import java.util.Scanner;

class StringManipulation
{
    public boolean CheckVovels(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0;

        for(i = 0; i< Arr.length; i++)
        {
            if(Arr[i] == 'A' || Arr[i] == 'a' || Arr[i] == 'E' || Arr[i] == 'e' || Arr[i] == 'I' || Arr[i] == 'i' || Arr[i] == 'O' || Arr[i] == 'o' || Arr[i] == 'U' || Arr[i] == 'u')
            {
                break;
            }
        }
        return (i < Arr.length);
    }    
    
}
class Program31_4
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string");
        String str = sobj.nextLine();

        StringManipulation smobj = new StringManipulation();

        boolean bRet = smobj.CheckVovels(str);

        if(bRet == true)
        {
            System.out.println(str+" Contains vovels in it");
        }
        else
        {
            System.out.println(str+" does not Contain vovels in it");

        }        
    }
}