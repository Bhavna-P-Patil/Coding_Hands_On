//Header file inclusion
#include<stdio.h>
#include<stdbool.h>
// Function Declaration
int ReversNo(int);
bool CheckPallindrome(int);

//Entry pint function
int main()
{
    int iValue = 0;
	bool bRet = false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	bRet = CheckPallindrome(iValue);    //Function call
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
int ReversNo(int iNo)
{
	//Local function
	int iDigit = 0;
	int iRev = 0;
	
	while(iNo!=0)
	{
	   iDigit = iNo % 10;   
	   printf("%d\n",iDigit);
       iRev= (iRev * 10)+iDigit;
	   iNo = iNo/10;            
	}
	return iRev;
	
}
 
bool CheckPallindrome(int iInput)
{
	int iNumber = 0;
	iNumber = ReversNo(iInput);
	if(iNumber == iInput)
	{
		return true;
	}
	else{
		return false;
	}
}

































































