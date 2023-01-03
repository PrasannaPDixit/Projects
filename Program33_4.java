import java.util.*;


class Numbers
{
    public int MultiplyDigits(int iNo)
    {
        int iMult = 1;
        int iDigit = 0;

        if(iNo < 0)       //Filter for negative numbers
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = (iNo%10);
            if(iDigit == 0)
            {
                iNo = iNo/10;
                continue;
            }
            iMult = iMult * iDigit;
            iNo = iNo/10;
        }
        return iMult;
    }
}

class Program33_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter a number");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        int iRet = nobj.MultiplyDigits(iNo);

        System.out.println("Multiplication of all digits in "+iNo+" is : "+iRet);
    }
}