//Header file inclusion
#include<stdio.h>
#include<stdbool.h>

// Function Declaration
bool Pallindrome(int);

//Entry pint function
int main()
{
    int iValue = 0;
	bool bRet = false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	bRet = Pallindrome(iValue);    //Function call
    if(bRet == true)
	{
		printf("Number is pallindrome\n");
	}
	else
	{
		printf("Number is not pallindrome\n");
	}
	return 0;
}

//Function Defination
bool Pallindrome(int iNo)
{
	//Local function
	int iDigit = 0;
	int iRev = 0;
	bool iTemp = iNo;
	
	while(iNo!=0)
	{
	   iDigit = iNo % 10;   
       iRev= (iRev * 10)+iDigit;
	   iNo = iNo/10;            
	}
	return iRev;
	
	if(iRev == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
}

































































