//Header file inclusion
#include<stdio.h>

// Function Declaration
int EvenSum(int);

//Entry pint function
int main()
{
    int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = EvenSum(iValue);    //Function call
    printf("Addition of even digits are:%d\n",iRet);
	return 0;
}

//Function Defination
int EvenSum(int iNo)
{
	//Local function
	int iDigit = 0;
	int iSum = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;         //updator
	}
	
	while(iNo>0)
	{
	   iDigit = iNo % 10;   
       if((iDigit % 2)==0)
	   {
		   iSum = iSum+iDigit;
	   }
	   
	   iNo = iNo/10;            
	}
	return iSum;
	
}

































































