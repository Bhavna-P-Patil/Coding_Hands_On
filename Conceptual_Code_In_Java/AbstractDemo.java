class AbstractDemo
{
	public static void main(String Arg[])
	{
		//Demo obj = new Demo();     //Error
		Demo obj;       // Refrence allow
		obj = new Hello();    //Upcasting
		obj.fun();       // fun of hello
		obj.gun();       //gun of demo
		obj.sun();      //sun of hello
		System.out.println(obj.i);
		System.out.println(obj.j);
	}
}

abstract class Demo
{
	public int i,j;
	public Demo()
	{
		System.out.println("Inside constructor of Demo");
		i = 10;
		j = 20;
	}
	public void fun()
	{
		System.out.println("Inside Fun of demo");
	}
	public void gun()
	{
		System.out.println("Inside Gun of Demo");
	}
	public abstract void sun();   //c++ = virtual void sun() = 0;
}

class Hello extends Demo
{
	public int x,y;
	public Hello()
	{
		System.out.println("Inside constructor of hello");
		x = 10;
		y = 20;
	}
	public void fun()       //overrride
	{
		System.out.println("Inside fun of hello");
	}
	public void sun()   //Defination
	{
		System.out.println("Inside sun of hello");
	}
}































