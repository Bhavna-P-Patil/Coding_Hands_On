///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept 1 numbers and check whether it is prime or not;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

class Marvellous
{
	public boolean CheckPrime(int iNo)
	{
		int iCnt = 0;
		boolean bFlag = true;
		
		for(iCnt = 2; iCnt <= iNo/2; iCnt++)
		{
			if((iNo % iCnt) == 0)
			{
				bFlag = false;
				break;
			}
		}
		return bFlag;
	}
}

///////////////////////////////////////////ENTRY_POINT_FUNCTION////////////////////////////////////////////

class Prime
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue = 0;
		boolean bRet = false;
		
		System.out.println("Enter number");
		iValue = sobj.nextInt();
		
		Marvellous mobj = new Marvellous();
		bRet = mobj.CheckPrime(iValue);
		
		if(bRet == true)
		{
			System.out.println("Number is prime");
		}
		else
		{
			System.out.println("NUmber is not prime");
		}
	}
}