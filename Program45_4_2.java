//Complete code to delete a perticular character from array
import java.util.Scanner;

class StringDemo
{
    public String Remove(String str, char Rem)
    {
        char Arr[] = str.toCharArray();
        int iCnt1 = 0;
        int i = 0, j= 0;

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
                    if((iCnt + i) == Arr.length -1)
                    {
                        j++;    //if last element is to be deleted there is arrayOutOfBound exception
                        break;  //thats why keeping the last element as it is 
                    }
                    i++;
                }
            }           
            
            Arr[iCnt] = Arr[iCnt + i];
            
        }
        // original array contains all the last elements which needs to be deleted
        //Array is having the required number of elements
        //i represents the number of deleted elements
        //j == 1 if the last element is to be deleted otherwise it is 0

        char Arr1[] = new char[Arr.length-i-j]; 

        for(int iCnt = 0; iCnt < Arr.length-i-j; iCnt++)
        {
            Arr1[iCnt] = Arr[iCnt];
        }
        String sRet = String.valueOf(Arr1);
        return sRet;

    }
    
}

class Program45_4_2
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

        
        
