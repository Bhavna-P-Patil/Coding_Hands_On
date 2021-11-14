// Accept number from user and return factorial of that number.

#include<stdio.h>
 
typedef unsigned long int UINT;

UINT Factorial(int);         // Declaration

int main()
{
    int iNo = 0;
    UINT  iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    iRet = Factorial(iNo);
    
    printf("Factortial is : %ld\n",iRet);
    
    return 0;
}
UINT Factorial(int iValue)
{
    UINT iFact = 1;
    int iCnt = 0;
    
    if(iValue < 0)  // Updator
    {
        iValue = -iValue;
    }
   /* for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iFact = iFact * iCnt; //  4
    }
	*/
	
	iCnt = 1;
	while(iCnt <= iValue)
	{
		iFact = iFact * iCnt;
		iCnt++;
	}
    return iFact;
}



























