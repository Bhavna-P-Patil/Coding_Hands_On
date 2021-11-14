//Header file inclusion
#include<stdio.h>

// Function Declaration
int Display(int);

//Entry pint function
int main()
{
    int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Display(iValue);    //Function call
    printf("Addition of digits is:%d\n",iRet);
	return 0;
}

//Function Defination
int Display(int iNo)
{
	//Local function
	int iDigit = 0,iSum = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;         //updator
	}
	
	while(iNo>0)
	{
	   iDigit = iNo % 10;       
	   iSum = iSum + iDigit;
	   iNo = iNo/10;            
	}
	return iSum;
	
}

































































