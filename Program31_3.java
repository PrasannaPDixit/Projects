import java.util.Scanner;

class StringManipulation
{
    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();
        int iCapCount = 0;

        for(int i = 0; i< Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCapCount++;
            }
        }
        return iCapCount;
    }

    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int iSmallCount = 0;

        for(int i = 0; i< Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                iSmallCount++;
            }
        }
        return iSmallCount;
    }

    public int Defference(String str)
    {
        return this.CountCapital(str) - this.CountSmall(str);
    }
    
    
}
class Program31_3
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string");
        String str = sobj.nextLine();

        StringManipulation smobj = new StringManipulation();

        int iRet = smobj.CountCapital(str);
        System.out.println("Count of Capital characters in "+str+" is\n"+iRet);

        iRet = smobj.CountSmall(str);
        System.out.println("Count of Small characters in "+str+" is\n"+iRet);

        iRet = smobj.Defference(str);
        System.out.println("Difference between count of cap & Small character in  "+str+" is\n"+iRet);

    }
}