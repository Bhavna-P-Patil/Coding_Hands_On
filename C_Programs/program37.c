//Header file inclusion
#include<stdio.h>

// Function Declaration
int ReversNo(int);

//Entry pint function
int main()
{
    int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = ReversNo(iValue);    //Function call
    printf("Revers of digits are:%d\n",iRet);
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

































































