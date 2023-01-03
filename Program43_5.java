import java.util.Scanner;

class MyArray
{
    public float Arr[];

    public MyArray(int iSize)
    {
        Arr = new float[iSize];
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the Marks of eaach student");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextFloat();
        }
    }

    public void Result()
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
                if(Arr[iCnt] < 35)
                {
                    System.out.println(Arr[iCnt]+"\tFail");
                }

                else if((Arr[iCnt] >= 35) && (Arr[iCnt] < 50))
                {
                    System.out.println(Arr[iCnt]+"\tPass class");
                }

                else if((Arr[iCnt] >= 50) && (Arr[iCnt] < 60))
                {
                    System.out.println(Arr[iCnt]+"\tSecond class");
                }
        
                else if((Arr[iCnt] >= 60) && (Arr[iCnt] < 70))
                {
                    System.out.println(Arr[iCnt]+"\tFirst class");
                }

                else if(Arr[iCnt] >= 70)
                {
                    System.out.println(Arr[iCnt]+"\tFirst class with disctinction");
                }
        }
    }    
}

class Program43_5
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number of students : ");
        int iLength = sobj.nextInt();

        MyArray mobj = new MyArray(iLength);

        mobj.Accept();
        mobj.Result();       
    }
}