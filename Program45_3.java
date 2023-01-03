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

    public void MaxOccurance(String str)
    {
        String Words[] = Splitx(str);
        int iRet[] = new int[Words.length];
        int i =0;

        while(i < Words.length)
        {
            for(int j = i; j< Words.length ; j++)
            {
                if(Words[j].equals(Words[i]))
                {
                    iRet[i]++;
                }
            }
            i++;
        }
        
        int iMax = iRet[0];
        int iMaxIndex = 0;

        for(int iCnt = 0; iCnt < iRet.length ; iCnt++)
        {
            if(iRet[iCnt] > iMax)
            {
                iMax = iRet[iCnt];
                iMaxIndex = iCnt;
            }
        }

        System.out.println("Maximum occured word is : "+Words[iMaxIndex]+" :occured : "+iMax+" times");
    }
}

class Program45_3
{
	public static void main(String args[])
	{
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter a string");
        String str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();
        
        try
        {
            sdobj.MaxOccurance(str);
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

        
        
