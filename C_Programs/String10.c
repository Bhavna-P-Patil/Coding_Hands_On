///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept string from user and measure the length of string using strlen function;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////
typedef unsigned int UINT;

UINT strlenX(char *str)
{
	int iCnt =0;
	if(str == NULL)
	{return 0; }
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

///////////////////////////////////////////ENTRY_POINT_FUNCTION////////////////////////////////////////////

int main()
{
	char Arr[20];
	UINT iRet = 0;
	
	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);           //Regular expression(Regects)
	
	iRet = strlenX(Arr);
	
	printf("Length of string is : %u\n",iRet);
	return 0;
}