///////////////////////////////Command_Line_Argument_Program////////////////////////////////////
import java.util.*;

class Command1
{
	public static void main(String Arg[])
	{
		if(Arg.length == 2)
		{
			int no1 = Integer.parseInt(Arg[0]);
			int no2 = Integer.parseInt(Arg[1]);
			int ans = no1 + no2;
			System.out.println("Addition is : "+ans);
		}
	}
}