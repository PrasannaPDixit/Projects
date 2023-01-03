//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
1. Convert any one of the array to its repeated version(abc=>abcabcabc)
2. By applying the loops compare the other array with this converted array
3. At a perticular index both the array will start matching 
4. if we get continuously matching array and count of matching characters becomes equal to the length of array
... then we can conclude that the arrays are rotational in nature.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class StringDemo
{
    public boolean CheckRotation(String str1, String str2)
    {
        if(str1.length() != str2.length())
        {
            return false;
        }

        char Arr1[] = str1.toCharArray();
        char Arr2[] = str2.toCharArray();

        char Arr3[] = new char[3*Arr2.length];
        char Arr4[] = new char[Arr1.length];
        int iCnt = 0;
        int iCnt1 = 0;
        int iCnt3 = 0;
        int iCount = 0;
        boolean bFlag = false;

        for(iCnt = 0; iCnt < Arr3.length; iCnt++)
        {
            if(iCnt1 == (Arr2.length))
            {
                iCnt1 = 0;
            }
            Arr3[iCnt] = Arr2[iCnt1];
            iCnt1++;
        }
        iCnt = 0;

        while(iCnt < Arr1.length)
        {
            iCnt3 = 0;
            for(int iCnt2 = 0 + iCnt; iCnt2 < Arr1.length + iCnt; iCnt2++)
            {
                if(Arr3[iCnt2] != Arr1[iCnt3])
                {
                    break;
                }

                if(Arr3[iCnt2] == Arr1[iCnt3])
                {
                    iCount++;
                }
                iCnt3++;

            }

            if(iCount == Arr1.length)
            {
                bFlag = true;
                break;
            }
                
            iCount = 0;
            iCnt++;
        }
        return bFlag;
    }    
}

class Program45_1
{
	public static void main(String args[])
	{
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter First string");
        String str1 = sobj.nextLine();

        System.out.println("Please enter Second string");
        String str2 = sobj.nextLine();

        StringDemo sdobj = new StringDemo();
        
        try
        {
            boolean bRet = sdobj.CheckRotation(str1, str2);
            if(bRet == true)
            {
                System.out.println("Both the strings are identical if rotated");
            }
            else
            {
                System.out.println("String are not rotational identical");
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

        
        
