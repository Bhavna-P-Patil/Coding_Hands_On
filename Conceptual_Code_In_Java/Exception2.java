// Exception handling program "ArithmeticException"
import java.util.Scanner;
class Exception2
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int no1 =0,no2 =0;
		float result = 0.0f;
		
		System.out.println("Enter the 1st number");
		no1 = sobj.nextInt();
		
		System.out.println("Enter the 2nd number");
		no2 = sobj.nextInt();
		
		
		try     //Exception prone
		{
		result = no1/no2;
		System.out.println("Division is :"+result);
	    }
		catch(java.lang.ArithmeticException obj)
		{
			System.out.println("Arithmatic Exception occured :"+obj);
		}
		catch(ArrayIndexOutOfBoundsException obj)
		{
			System.out.println("Array index exception occured :"+obj);
		}
		catch(Exception obj)     //Generic catch block
		{
			System.out.println("Exception occured");
		}
		finally
		{
			System.out.println("INside finally");
		}
		
	}
}