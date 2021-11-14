///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//  Accept string from user and count Capital letter also count small letter in the string ;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

char CountCapitalSmallBoth(char *str)
{
	int CCount =0,SCount = 0;
	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str <= 'Z'))
		{
			CCount++;
		}
		else if((*str >= 'a')&&(*str <= 'z'))
		{
			SCount++;
		}
		str++;
	}
	printf("Small letter are : %d\n",SCount);
	printf("Capital letter are : %d\n",CCount);
}
///////////////////////////////////////////ENTRY_POINT_FUNCTION////////////////////////////////////////////

int main()
{
	
	char Arr[20];
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	CountCapitalSmallBoth(Arr);
	
	return 0;
}