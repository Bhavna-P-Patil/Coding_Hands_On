#include<iostream>

using namespace std;
typedef unsigned int UINT;
UINT ToggleONRange(UINT iNo, int iStart, int iEnd)
{
	UINT iResult = 0, iMask = 0;
	
	return (iNo ^((0xFFFFFFFF<<(iStart -1) & 0xFFFFFFFF >> (32 -iEnd))));

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
	
	iRet = ToggleONRange(iValue,i,j);
	
	cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}