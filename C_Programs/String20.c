///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept string from user and count small letter in the string ;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

char CountSmall(char *str)
{
	int iCnt =0;
	while(*str != '\0')
	{
		if((*str >= 'a')&&(*str <= 'z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
///////////////////////////////////////////ENTRY_POINT_FUNCTION////////////////////////////////////////////

int main()
{
	int iRet = 0;
	char Arr[20];
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountSmall(Arr);
	
	printf("Small letter are : %d\n",iRet);
	return 0;
}