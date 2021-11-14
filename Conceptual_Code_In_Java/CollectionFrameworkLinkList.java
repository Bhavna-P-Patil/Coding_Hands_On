import java.util.*;

class CollectionFrameworkLinkList
{
	public static void main(String Arg[]) 
	{
		LinkedList <Integer> obj = new LinkedList<Integer>();
		
		obj.add(10);
		obj.add(20);
		obj.add(30);
		
		System.out.println("Data from linked list");
		System.out.println(obj);
		
		Iterator <Integer> iobj = obj.iterator();
		System.out.println("Data from linked list using iterator is ");
		while(iobj.hasNext())
		{
			System.out.println(iobj.next());
		}
		obj = null;
	}
}














