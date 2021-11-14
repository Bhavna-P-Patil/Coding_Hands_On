package PkgFolder;

import java.util.*;

public class StringX
{
	public String str;       
	
	public void Accept()                      //Getter
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String : "+str);
		str = sobj.nextLine();
	}
	public void Display()                      //Setter
	{
		System.out.println("String is : "+str);
	}
}