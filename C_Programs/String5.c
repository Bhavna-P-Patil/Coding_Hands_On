///////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////////////////
//   Basic program on string;
///////////////////////////////////////////HEADER_FILES//////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////HELPER_FUNCTION//////////////////////////////////////////////////

void Display(char Brr[])
{
	printf("Name is %s\n",Brr);
}

///////////////////////////////////////////ENTRY_POINT_FUNCTION////////////////////////////////////////////

int main()
{
	char Arr[20];
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);           //Regular expression(Regects)
	
	Display(Arr);
	return 0;
}