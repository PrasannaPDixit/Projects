import java.util.Scanner;

class Numbers
{
    public int Arr[];

    public Numbers(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length+" Eements");
        
        for(int iCnt = 0 ; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void DivisibleByFive()
    {
        for(int iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt]%5 == 0)
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
    
}

class Program32_2
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array :");
        int iLength = sobj.nextInt();

        Numbers nobj = new Numbers(iLength);
        nobj.Accept();
        
        System.out.println("Elements divisible by 5 are : ");
        nobj.DivisibleByFive();
        
    }
}