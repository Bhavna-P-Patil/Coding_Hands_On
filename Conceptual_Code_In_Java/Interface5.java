// One class can inherites other class and implements the interface
class Interface5
{
	public static void main(String Arg[])
	{
		Marvellous mobj = new Marvellous();
		mobj.fun();
		mobj.gun();
		
	}
}

interface Hello1
{
	int i = 10;
	void fun();
	
}

class Hello2
{
	public void gun()
	{
		System.out.println("Inside Hello2 gun");
	}
}

class Marvellous extends Hello2 implements Hello1    //6
{
	public void fun()
	{
		System.out.println("Inside fun");
	}
	
}