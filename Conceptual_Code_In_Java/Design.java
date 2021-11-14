//Singleton "Creational-design pattern"

final class Singleton         // no one can inherit
{
	public int x , y;
	private static Singleton obj = new Singleton();
	
	private Singleton()
	{
		System.out.println("Inside constructor");
	}
	public static Singleton GetObject()
	{
		return obj;
	}
}

class DesignMode
{
	public static void main(String arg[])
	{
		//Singleton obj = new Singleton();  //
		
		Singleton sobj2 = Singleton.GetObject();
		Singleton sobj1 = Singleton.GetObject();
	}
}