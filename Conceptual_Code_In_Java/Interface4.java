// One class can implements more than one interfaces
class Interface4
{
	public static void main(String Arg[])
	{
		Marvellous mobj = new Marvellous();
		mobj.fun();
		mobj.gun();
		System.out.println("value of i from Hello1 :"+Hello1.i);
		System.out.println("value of i from Hello2 :"+Hello2.i);
		
	}
}

interface Hello1
{
	int i = 10;
	void fun();
	void gun();
}

interface Hello2
{
	int i = 20;
	void fun(int no);
}

class Marvellous implements Hello1,Hello2   //5
{
	public void fun()
	{
		System.out.println("Inside fun");
	}
	public void fun(int no)
	{
		System.out.println("Inside fun with interger");
	}
	public void gun()
	{
		System.out.println("Inside gun");
	}
}