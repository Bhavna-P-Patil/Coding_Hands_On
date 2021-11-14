///////////////accept the string from user and display how many vowels in that string//
import java.util.*;
import PkgFolder.StringX;         //User_Define_Package 

class Marvellous extends StringX
{
	public String ReverseX()
	{
		char Arr[] = str.toCharArray();
		int iStart = 0, iEnd = Arr.length-1;
		char temp;
		while(iStart<iEnd)
		{
			temp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = temp;
			iStart++;
			iEnd--;
		}
		return Arr.toString();
	}
}

class String8_Reverse
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		String sobj = mobj.ReverseX();
		System.out.println("Reverse string is :"+sobj);
		
		
	}
}