//Header file inclusion
#include<stdio.h>

// Function Declaration
int CountDigit(int);

//Entry pint function
int main()
{
    int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountDigit(iValue);    //Function call
    printf("Count of digits is:%d\n",iRet);
	return 0;
}

//Function Defination
int CountDigit(int iNo)
{
	//Local function
	int iDigit = 0,iCount = 0;
	if(iNo==0)               //Filter
	{
		return 1;
	}
	if(iNo<0)
	{
		iNo = -iNo;         //updator
	}
	
	while(iNo>0)
	{
	   iDigit = iNo % 10;       
	   iCount++;
	   iNo = iNo/10;            
	}
	return iCount;
	
}

































































