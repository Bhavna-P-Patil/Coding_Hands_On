///////////////accept the string from user and return pallindrome////
import java.util.*;
import PkgFolder.StringX;         //User_Define_Package 

class Marvellous extends StringX
{
	public boolean ChkPallindrome()
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
		String newstr = new String(Arr);
		boolean bRet = newstr.equals(str);      //Inbuilt method(equals)
		return bRet;
	}
}

class String9_Pallindome
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		boolean bRet;
		bRet = mobj.ChkPallindrome();
		if(bRet == true)
		{
			System.out.println("String is pallindrome");
		}
		else
		{
			System.out.println("String is not pallindrome");
		}
		
		
	}
}