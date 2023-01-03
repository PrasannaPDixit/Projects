import java.util.*;


class Numbers
{
    public int Difference(int iNo)
    {
        int iEvenSum = 0;
        int iOddSum = 0;

        while(iNo != 0)
        {
            if(((iNo%10) %2) == 0)
            {
                iEvenSum = iEvenSum + (iNo%10);
            }
            else
            {
                iOddSum = iOddSum + (iNo%10);
            }
            iNo = iNo/10;
        }
        return(iEvenSum-iOddSum);
    }
}

class Program33_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter a number");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        int iRet = nobj.Difference(iNo);

        System.out.println("Difference between summation of even & odd digits in  "+iNo+" is : "+iRet);
    }
}