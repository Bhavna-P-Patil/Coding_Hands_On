///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept string from user and return frequency of character;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

int CountFrequency(char *str, char ch)
{
	int iCnt =0;
	if(str == NULL)
	{
		return -1;
	}
	while(*str != '\0')
	{
		if(*str == ch)
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
	
	char Arr[30];
	int iRet =0;
	char cValue = '\0';
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the Character\n");
	scanf(" %c",cValue);           //IMP
	
	iRet = CountFrequency(Arr, cValue);
	printf("Frequency is  : %d\n",iRet);
	
	return 0;
}