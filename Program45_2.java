import java.util.Scanner;

class StringDemo
{
    public int CountWords(String str)
    {
        int iWordCount = 0;
        int i = 0;
        while(i < str.length())
        {
            if(str.charAt(i) == ' ')
            {
               iWordCount++;
            }
            i++;
        }
        return iWordCount;
    }

    public String[] Splitx(String str)
    {
        int iWordCount = CountWords(str);

        String[] Words = new String[iWordCount+1];

        int iCnt = 1;
        int iCnt1 = 0;

        Words[iCnt1] = Character.toString(str.charAt(0));

        while(iCnt < str.length())
        {
            if(str.charAt(iCnt) != ' ')
            {
                Words[iCnt1] = Words[iCnt1] + Character.toString(str.charAt(iCnt));
            }
            
            if(str.charAt(iCnt) == ' ')
            {
                iCnt1++;
                Words[iCnt1] = Character.toString(str.charAt(iCnt + 1));
                iCnt++;
            }
            iCnt++;
        }

        return Words;
    }

    public int[] CountOccurance(String str)
    {
        String Words[] = Splitx(str);
        int iRet[] = new int[Words.length];
        String Temp[] = new String[Words.length];
        int iCnt =0;
        

        while(iCnt < Words.length)
        {
            for(int iCnt1 = iCnt; iCnt1< Words.length ; iCnt1++)
            {
                if(Words[iCnt1].equals(Words[iCnt]))
                {
                    iRet[iCnt]++;
                }   
            }
            iCnt++;
        }
        return iRet;
    }

    public void DisplayOccurance(String str)
    {
        String Words[] = Splitx(str);
        int iRet[] = CountOccurance(str);
        boolean bFlag = false;

        System.out.println(Words[0]+ " : "+iRet[0]);

        for(int iCnt2 = 1; iCnt2 < Words.length; iCnt2++)
        {
            for(int iCnt3 = 0; iCnt3 < iCnt2; iCnt3++)
            {
                if(Words[iCnt3].equals(Words[iCnt2]))
                {
                    bFlag = true;
                    break;
                }
            }
            if(bFlag == false)
            {
                System.out.println(Words[iCnt2]+ " : "+iRet[iCnt2]);
            }
            else
            {
                bFlag = false;
            }
            
        }
    }
}

class Program45_2
{
	public static void main(String args[])
	{
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter a string");
        String str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();
        
        try
        {
            sdobj.DisplayOccurance(str);
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