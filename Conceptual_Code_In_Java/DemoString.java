

class DemoString
{
	public static void main(String Arg[])
	{
		String str1 = "Hello";
		
		String str2 = new String("Hello");
		
		char Arr[] = {'H','e','l','l','o'};
	    String str3 = new String(Arr);
		
		System.out.println(str1);
		System.out.println(str2);
		System.out.println(str3);
		
		System.out.println("String length is : "+str1.length());    //Length method
		System.out.println("Array length is : "+Arr.length);        //Length Property
	    
		String s1 = "Demo";
		String s2 = "Demo";
		String s3 = "Demo";
		
		String s4 = new String("Demo");
		String s5 = new String("Demo");
		String s6 = new String("Demo");
		
		String sobj1 = "Hello";
		String sobj2 = "Hello";
		String sobj3 =  new String("Hello");
		
		if(sobj1 == sobj3)               //compare refrence
		{
			System.out.println("Equal");
		}
		else
		{
			System.out.println("NOt Equal");
		}
		if(sobj1.equals(sobj3))         //Equals method(compare data)
		{
			
			System.out.println("Equal");
		}
		else
		{
			
			System.out.println("NOt Equal");
		}
		
	}
}