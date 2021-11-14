// Exception handling program "IndexOutOfBoundsException"
import java.util.Scanner;
class Exception1
{
	public static void main(String Arg[])
	{
		int Arr[] = new int [5];
		Arr[0] = 10;
		Arr[1] = 20;
		Arr[2] = 30;
		Arr[3] = 40;
		Arr[4] = 50;
		
		int index = 0;
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the index of array");
		index = sobj.nextInt();
		
		try 
		{
		System.out.println("Data is :"+Arr[index]);
	    }
		catch(java.lang.ArrayIndexOutOfBoundsException obj)
		{
			System.out.println("Exception occured :"+obj);
		}
		finally
		{
			System.out.println("Application gets terminated");
		}
		System.out.println("End of main");
	}
}