#include<stdio.h>

//Input :3
//Output: 6

//input : 5
//output: 15

int Factorial(int);    //Declaration 

int main()
{
 int iNo = 0, iRet = 0;
 
 printf("Enter number\n");
 scanf("%d",&iNo);

 iRet = Factorial(iNo);

 printf("Factorial is : %d\n",iRet);
 
 return 0;
}

int Factorial(int iValue)
{
    int iFact = 1;
	int iCnt = 0;
	
	if(iValue < 0)     //Updator(when we enter -5 then it return 15)
	{
		iValue = -iValue;
	}
	//   1          2          3
	for(iCnt=1; iCnt<=iValue; iCnt++)
	{
		iFact = iFact * iCnt;   //4
	}
	return iFact;
}	