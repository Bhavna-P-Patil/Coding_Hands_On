import java.util.*;

class Command
{
	public static void main(String Arg[])
	{
		System.out.println("Total number of arguments are : "+Arg.length);
		
		System.out.println("Command line arguments are : ");
		for(int i = 0; i < Arg.length; i++)
		{
			System.out.println(Arg[i]);
		}
	}
}