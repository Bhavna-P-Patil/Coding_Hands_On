//Accept N numbers and perform addition

import java.util.*;

class Add
{
	public int Addition(int Brr[])
	{
		int iSum = 0, iCnt = 0;
		for(iCnt = 0; iCnt < Brr.length; iCnt++)
		{
			iSum += Brr[iCnt];
		}
		return iSum;
		
	}
}

class ArrayAddition
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0, iCnt = 0, iRet = 0;
	
    	System.out.println("Enter number of elements : ");
		iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter numbers : ");
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
		
		Add aobj = new Add();
		iRet = aobj.Addition(Arr);
		System.out.println("Addition is : "+iRet);
	}
}