#include<stdio.h>

void TimeTable(int iStd)
{
	switch(iStd)
	{
	  case 1:
        printf("Your exam at:11AM\n");
        break;
      case 2:
        printf("Your exam at:12NOON\n");
        break;		
      case 3:
        printf("Your exam at:1Pm\n");
        break;
      case 4:
        printf("Your exam at:2PM\n");
        break;
      default:
        printf("Wrong Standard\n");
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