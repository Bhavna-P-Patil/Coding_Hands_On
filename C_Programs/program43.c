#include<stdio.h>


int Power(int, int);
int main()
{
	int iValue = 0, iCount = 0, iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	printf("Enter count number\n");
	scanf("%d",&iCount);
	
	iRet = Power(iValue,iCount);
	printf("Result is:%d\n",iRet);
	
	return 0;
}

int Power(int iNo1, int iNo2)
{
	int iMult = 1;
	int iCnt = 0;
	
	for(iCnt=1; iCnt<=iNo2; iCnt++)
	{
		iMult = iMult * iNo1;
	}
	return iMult;
}




























































