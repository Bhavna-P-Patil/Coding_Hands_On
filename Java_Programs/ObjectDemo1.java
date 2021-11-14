class Demo
{
	public String Name;
	public String Batch;
	
	public Demo(String x, String y)
	{
		this.Name = x;
		this.Batch = y;
	}
}

class ObjectDemo1
{
	public static void main(String Arg[])
	{
		Demo obj1 = new Demo("Rahul","PPA");
		Demo obj2 = new Demo("Amit","Python");
		
		System.out.println("Hashcode of obj1 is : "+obj1.hashCode());
		System.out.println("Hashcode of obj2 is : "+obj2.hashCode());
	}
}