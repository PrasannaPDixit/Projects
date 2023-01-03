
import java.util.Scanner;

class StringDemo
{
    public boolean CheckExpression(String str)
    {
        char Arr[] = str.toCharArray();
        int iOpenCnt = 0, iCloseCnt = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == '(')
            {
                iOpenCnt++;
            }
            if(Arr[iCnt] == ')')
            {
                iCloseCnt++;
            }
        }
        return (iOpenCnt == iCloseCnt);
    }    
}

class Program45_5
{
	public static void main(String args[])
	{
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter a string");
        String str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();
        
        try
        {
            boolean bRet = sdobj.CheckExpression(str);
            if(bRet == true)
            {
                System.out.println("Expression is balanced...");
            }
            else
            {
                System.out.println("Expression is NOT balanced...");
            }
        }
        catch(java.lang.NullPointerException obj)
        {
            System.out.println("Exception occured : "+obj);
            System.out.println("This may be generated because there are multiple white spaces which reseults in null pointer");
        }
        catch(java.lang.StringIndexOutOfBoundsException obj1)
        {
            System.out.println("Exception occured : "+obj1);
            System.out.println("This may be generated because there are multiple white spaces at the starting which reseults in null pointer");
        }
        finally
        {
            sdobj = null;
            sobj.close();
        }
        
	}
}

        
        
