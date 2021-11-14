import java.util.*;

class StringX
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


class String3
{
	public static void main(String arg[])
	{
		StringX sobj = new StringX();
		sobj.Accept();
		sobj.Display();
	}
}