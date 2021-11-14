import java.lang.*;

class inheritance
{
	public static void main(String arg[])
	{
		Base bobj = new bobj();
		bobj.fun();
		
		Derived dobj = new dobj();
		dobj.fun();
		dobj.gun();
	}
}


class Base
{
	public int x;
	public int y;
	
	public Base()
	{
		System.out.println("Base constructor");
		this.x = 0;
		this.y = 0;
	}
	public Base(int i,int j )
	{
		System.out.println("Base constructor");
		this.x = i;
		this.y = j;
	}
	public void fun()
	{
		System.out.println("Base fun");
	}
}

class Derived extends Base             // class Derived : public Base
{
	public int a, b;
	public Derived()
	{
		System.out.println("Derived constructor");
		this.a = 0;
		this.b = 0;
	}
	public Derived()
	{
		System.out.println("Derived constructor");
		this.a = no1;
		this.b = no2;
	}
	public  void Derived()
	{
		System.out.println("Derived gun");
		
	}
} 
























