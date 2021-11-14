#include<iostream>

using namespace std;
typedef unsigned int UINT;
UINT ToggleRange(UINT iNo, int iStart, int iEnd)
{
	UINT iMask1 = 0xFFFFFFFF, iMask2 = 0xFFFFFFFF;
	UINT iResult = 0, iMask = 0;
	
	iMask1 = iMask1 << (iStart -1);
	iMask2 = iMask2 >> (32 -iEnd);
	iMask = iMask1 & iMask2;
	iResult = iNo ^ iMask;
	return iResult;
	
}

int main()
{
	UINT iValue = 0, iRet = 0, i, j;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	cout<<"Enter Starting postion\n";
	cin>>i;
	
	cout<<"Enter Ending postion\n";
	cin>>j;
	
	iRet = ToggleRange(iValue,i,j);
	
	cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}