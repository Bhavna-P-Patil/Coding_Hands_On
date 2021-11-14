///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept number from user and return 7th and 14th bit;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////
                                            
#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

typedef unsigned int UINT;
bool CheckBit(UINT iNo, UINT iPos)
{
	UINT iMask = 0x00000001;       
	UINT iResult =0;       

    iMask = iBit << ([pos -1])	
	
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
	UINT iValue = 0, iBit =0;
	bool bRet = false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	printf("Enter position\n");
	scanf("%d",&iBit);
	
	bRet = CheckBit(iValue, iBit);
	
	if(bRet == true)
	{
		printf("bit is ON\n");
	}
	else
	{
		("bit is OFF\n");
	}	
	return 0;
}