#include<stdio.h>

int Addition(int Brr[])
//int Addition(int *Brr)
{
	int iSum = 0;
	for(int iCnt = 0; iCnt<5; iCnt++)
	 {
		 iSum += Brr[iCnt];
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
    iRet = Addition(Arr);
	printf("Addition is: %d\n",iRet);
	
	return 0;
}