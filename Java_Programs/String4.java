///////////////accept the string from user and display how many vowels in that string//
import java.util.*;
import PkgFolder.StringX;
class Marvellous extends StringX
{
	public int CountVowels()
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0, i =0;
		for(iCnt=0; iCnt<Arr.length; iCnt++)
		{
			if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u'))
			{
				i++;
			}
		
	    }
		return i;
	}
}

class String4
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		int iRet = 0;
		mobj.Accept();
		mobj.Display();
		iRet = mobj.CountVowels();
		System.out.println("Number of vowels are : "+iRet);
		
	}
}