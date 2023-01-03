// Generates exception if last element is to be deleteted
import java.util.Scanner;

class StringDemo
{
    public String Remove(String str, char Rem)
    {
        char Arr[] = str.toCharArray();
        int iCnt1 = 0;
        int i = 0;

        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            if((iCnt + i) >= Arr.length) 
            {
                break;
            }
            
                if((Arr[iCnt + i] == Rem))
                {
                    while(Arr[iCnt + i] == Rem)
                    {
                        i++;
                    }
               }           
            
            Arr[iCnt] = Arr[iCnt + i];
        }
        char Arr1[] = new char[Arr.length-i];

        for(int iCnt = 0; iCnt < Arr.length-i; iCnt++)
        {
            Arr1[iCnt] = Arr[iCnt];
        }
        String sRet = String.valueOf(Arr1);
        return sRet;

    }
    
}

class Program45_4_1
{
	public static void main(String args[])
	{
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter a string");
        String str = sobj.nextLine();

        System.out.println("Please enter a charcter to remove from string");
        char Rem = sobj.next().charAt(0);

        StringDemo sdobj = new StringDemo();
        
        try
        {
            String sRet = sdobj.Remove(str, Rem);
            System.out.println("Output : "+sRet);
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

        
        
