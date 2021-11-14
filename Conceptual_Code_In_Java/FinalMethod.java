import java.lang.*;
class FinalMethod
{
	public static void main(String arg[])
	{
		Base bobj = new Derived();  //Upcasting
		bobj.fun();
		FinalMethod.gun();
	}
	public static void gun()  //final local variable
	{
		final int no = 11;
		System.out.println("Static fun");
		//no++;    NA
	}
}

class Base
{
	public void fun()
	{
		System.out.println("Base fun");
	}
	public final void gun()       //Method that we cannot override
	{
		System.out.println("Base gun");
	}
}

class Derived extends Base
{
	public void fun()           // Override
	{
		System.out.println("Derived fun");
	}
	/*public void gun()
	{
		System.out.println("Derived gun");
	}*/
}


