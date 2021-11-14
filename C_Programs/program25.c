// Accept number from user and display its factors.

#include<stdio.h>
void DisplayFactors(int);

int main()
{
	int iNo = 0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	DisplayFactors(iNo);
	return 0;
	
}

void DisplayFactors(int iValue)
{
	int iCnt = 0;
	if(iValue < 0)           //Updator
	{
		iValue = -iValue;
	}
	
	for(iCnt=1; iCnt<iValue/2; iCnt++)   // with N/2 complexity //O(N/2)
	{
		if((iValue % iCnt) == 0)   // iCnt is a factor
		{
			printf("factor is : %d\n",iCnt);
		}
	}
}	

























































