//Header file inclusion
#include<stdio.h>

// Function Declaration
int CountEven(int);

//Entry pint function
int main()
{
    int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountEven(iValue);    //Function call
    printf("Number of even digits are:%d\n",iRet);
	return 0;
}

//Function Defination
int CountEven(int iNo)
{
	//Local function
	int iDigit = 0;
	int iCount = 0;
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
       if((iDigit % 2)==0)
	   {
		   iCount++;
	   }
	   
	   iNo = iNo/10;            
	}
	return iCount;
	
}

































































