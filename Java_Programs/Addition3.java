///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept 2 numbers and return Addition;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

class Add
{
    public int Addition(int i , int j)
	{
		int iResult = 0;
		iResult = i + j;
		return iResult;
	}
}
///////////////////////////////////////////ENTRY_POINT_FUNCTION////////////////////////////////////////////

class Addition3
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNo1 = 0, iNo2 = 0, iAns = 0;
		
		System.out.println("Enter First number");
		iNo1 = sobj.nextInt();
		
		System.out.println("Enter Second number");
		iNo2 = sobj.nextInt();
		
		Add aobj = new Add();
		iAns = aobj.Addition(iNo1,iNo2);
		
		System.out.println("Addition is :"+iAns);
	}
}