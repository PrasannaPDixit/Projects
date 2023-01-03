import java.util.*;


class Numbers
{
    public int CountDigits(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)       //Filter for negative numbers
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            if(((iNo % 10) >= 3) && ((iNo % 10) <= 7) )
            {
                iCnt++;
            }
            iNo = iNo/10;
        }
        return iCnt;
    }
}

class Program33_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter a number");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        int iRet = nobj.CountDigits(iNo);

        System.out.println("number of digits in between 3 & 7 in "+iNo+" is : "+iRet);
    }
}