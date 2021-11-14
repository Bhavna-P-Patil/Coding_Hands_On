///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept number from user and return 21st bit;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////
                                           
#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
	UINT iMask = 0x00100000;
	UINT iResult =0;
	
	iResult = iNo & iMask;
	if(iResult == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

///////////////////////////////////////////ENTRY_POINT_FUNCTION////////////////////////////////////////////

int main()
{
	UINT iValue = 0;
	bool bRet = false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = CheckBit(iValue);
	
	if(bRet == true)
	{
		printf("4th bit is ON\n");
	}
	else
	{
		("4th bit is OFF\n");
	}	
	return 0;
}