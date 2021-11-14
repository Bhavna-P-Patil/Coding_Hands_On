///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept string from user and check whether it is pallindrome or not;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

bool Pallindrome(char *str)
{
	char *end = NULL;
	bool flag = true;
	start = str;
	end  = str;
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(*str <end)
	{
		if(*str != *end)
		{
			flag = false;
			break;
		}
		str++;
		end--;
	}
	return flag;
}
///////////////////////////////////////////ENTRY_POINT_FUNCTION////////////////////////////////////////////

int main()
{
	
	char Arr[30];
	bool bRet =false;
	char cValue = '\0';
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);

	bRet = Pallindrome(Arr);
	if(bRet == true)
	{
		printf("It is pallindrome\n");
	}
	else
	{
		printf("It is not pallindrome\n");
	}
	
	return 0;
}