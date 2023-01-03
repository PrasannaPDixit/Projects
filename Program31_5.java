import java.util.Scanner;

class StringManipulation
{
    public void DisplayReverse(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0;

        for(i = (Arr.length-1); i>=0; i--)
        {
            System.out.print(Arr[i]);
        }
    }    
    
}
class Program31_5
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string");
        String str = sobj.nextLine();

        StringManipulation smobj = new StringManipulation();

        smobj.DisplayReverse(str);    
    }
}