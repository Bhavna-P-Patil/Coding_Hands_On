///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept string from user and return vowels i n small alphabets;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

int Count(char *str)
{
	int iCnt = 0;
	if(str == NULL)
	{
		return -1;
	}
	while (*str != '\0')
	{
		if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
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
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet =Count(Arr);
	printf("NUmber of Vowels are : %d\n",iRet);
	
	return 0;
}