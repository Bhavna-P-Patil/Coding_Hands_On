///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Check whether letter is small or not ;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

bool CheckSmall(char c)
{
	if((c >= 'a')&&(c <= 'z'))
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
	char ch = '\0';
	bool bRet = false;
	
	printf("Enter character\n");
	scanf("%c",&ch);
	
	bRet = CheckSmall(ch);
	
	if(bRet == true)
	{
		printf("It is capital\n");
	}
	else
	{
		printf("It is not capital\n");
	}
	return 0;
}