#include<stdio.h>

int Addition(int Brr[], int iSize)
//int Addition(int *Brr)
{
	int iSum = 0;
	for(int iCnt = 0; iCnt<iSize; iCnt++)
	 {
		 iSum += (*Brr);
		 Brr++;
	 }
	 return iSum;
}

int main()
{
	int Arr[5];        
	int iRet =0;
	
	printf("Enter the numbers\n ");
	
	for(int iCnt = 0; iCnt<5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
    iRet = Addition(Arr,5);
	printf("Addition is: %d\n",iRet);
	
	return 0;
}