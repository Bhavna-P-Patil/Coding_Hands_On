#include<stdio.h>

void TimeTable(int iStd)
{
	if(iStd == 1)
	{
		printf("Your exam is at : 11AM \n");
	}	
	
	else if(iStd == 2)
	{
		printf("Your exam is at : 12NOON \n");
	}	
	
	else if(iStd == 3)
	{
		printf("Your exam is at : 1PM \n");
	}	
	
	else if(iStd == 4)
	{
		printf("Your exam is at : 2PM \n");
	}	
	
	else
	{
		printf("Wrong Division \n");
	}	
       		
}
int main()
{
	
    printf("Time table of Exam\n");
 
    int iValue = 0;
	
	printf("Enter your standard\n");
	scanf("%d",iValue);
	
	TimeTable(iValue);
 
    return 0;
}