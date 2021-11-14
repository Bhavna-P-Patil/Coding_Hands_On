///////////////accept the string from user and display how many vowels in that string//
import java.util.*;
import PkgFolder.StringX;         //User_Define_Package 
class Marvellous extends StringX
{
	public int CountVowels()
	{
		char Arr[] = str.toCharArray();  // string into character_array
		int iCnt = 0, i =0;
		while(iCnt < Arr.length)
		{
			if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u'))
			{
				i++;
			}
			iCnt++;
		
	    }
		return i;
	}
}

class String5
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