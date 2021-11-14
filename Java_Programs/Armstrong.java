///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept 1 numbers and check whether it is Armstrong or not;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////

import java.util.*;

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

class Marvellous
{
	public boolean CheckArmstrong(int iNo)
	{
		int iTemp = 0, iDigCnt = 0,iDigit = 0, iPower = 1, iCnt =0, iSum = 0;
		if(iNo < 0)
		{
			iNo = - iNo;
		}
		iTemp = iNo;
		while(iTemp != 0)
		{
			iDigCnt++;
			iTemp = iTemp / 10;
		}
		iTemp = iNo;
		
		while(iTemp != 0)
		{
			iDigit = iTemp % 10;
			for(iCnt = 1; iCnt <= iDigCnt; iCnt++)
			{
				iPower *= iDigit;
			}
			iSum = iSum + iPower;
			iPower = 1;
			iTemp /= 10;
		}
		if(iSum == iNo)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
}

///////////////////////////////////////////ENTRY_POINT_FUNCTION////////////////////////////////////////////

class Armstrong
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue = 0;
		boolean bRet = false;
		
		System.out.println("Enter number");
		iValue = sobj.nextInt();
		
		Marvellous mobj = new Marvellous();
		bRet = mobj.CheckArmstrong(iValue);
		
		if(bRet == true)
		{
			System.out.println("Number is Armstrong");
		}
		else
		{
			System.out.println("NUmber is not Armstrong");
		}
		
		
	}
}