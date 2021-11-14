import java.util.*;

class CollectionFrameworkStack
{
	public static void main(String Arg[]) 
	{
		Stack <String> sobj = new Stack<String>();
		
		sobj.push("India");
		sobj.push("US");
		sobj.push("PAkistan");
		sobj.push("China");
		
		System.out.println(sobj);
		
		//sobj.pop();
		//sobj.pop();
		
		System.out.println(sobj);
		
		Iterator <String> iobj = sobj.iterator();
		while(iobj.hasNext())
		{
			System.out.println(iobj.next());
		}
		sobj = null;
	}
}














