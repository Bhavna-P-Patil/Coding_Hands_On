///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept number from user and return 7th and 14th bit;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////
                                            
#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
	UINT iMask = 0x0000000f;         // 0000 0000 0000 0000 0000 0000 0000 1111
	UINT iResult =0;                 //  0     0    0   0     0   0    0     15(f)
	                                 //          0x0000000f
	
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
		printf("7th and 12th bit is ON\n");
	}
	else
	{
		("bit is OFF\n");
	}	
	return 0;
}