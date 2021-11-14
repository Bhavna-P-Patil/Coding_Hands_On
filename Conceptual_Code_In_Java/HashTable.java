import java.util.*;


class HashTable
{
	public static void main(String str[])
	{
		 //         Key       Value
		Hashtable <String, Integer> hobj = new Hashtable<String , Integer>();
		
		hobj.put("PPA",15000);
		hobj.put("LB",14000);
		hobj.put("PML",12500);
		hobj.put("LSP",21000);
		hobj.put("Angular",15000);
		hobj.put("C#",14500);
		
		System.out.println(hobj.get("LB")); //data search with the key
		System.out.println("Size of hashtable is :"+hobj.size());
		
		System.out.println("Data from hashtable ");
		hobj.remove("C#");
		
		Enumeration eobj = hobj.keys();
		
		while(eobj.hasMoreElements())
		{
			System.out.println(eobj.nextElement());
		}
		
		hobj.clear();    //this method clears data
		hobj = null;
	}
}























