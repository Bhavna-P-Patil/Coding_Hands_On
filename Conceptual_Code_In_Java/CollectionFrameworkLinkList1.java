import java.util.*;

class CollectionFrameworkLinkList1
{
	public static void main(String Arg[]) 
	{
		ArrayList <Integer> obj = new ArrayList<Integer>();
		
		obj.add(10);
		obj.add(20);
		obj.add(30);
		
		System.out.println("Data from Array list");
		System.out.println(obj);
		
		Iterator <Integer> iobj = obj.iterator();
		System.out.println("Data from Array list using iterator is ");
		while(iobj.hasNext())
		{
			System.out.println(iobj.next());
		}
		obj = null;
	}
}














