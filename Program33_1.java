import java.util.*;


class Numbers
{
    public int CountEvenDigits(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)       //Filter for negative numbers
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            if(((iNo % 10) % 2) == 0)
            {
                iCnt++;
            }
            iNo = iNo/10;
        }
        return iCnt;
    }
}

class Program33_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter a number");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        int iRet = nobj.CountEvenDigits(iNo);

        System.out.println("number of even digits in "+iNo+" is : "+iRet);



    }
}