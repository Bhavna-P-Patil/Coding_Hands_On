#include<stdio.h>
#include<stdlib.h>

int Addition(int Brr[], int iSize)
//int Addition(int *Brr)
{
	int iSum = 0;
	for(int iCnt = 0; iCnt<iSize; iCnt++)
	 {
		 iSum += Brr[iCnt];
	 }
	 return iSum;
}

int main()
{
	int *Arr = NULL;
	int iRet =0, iLength = 0;
	
	printf("Enter number of elements\n ");
	scanf("%d",&iLength);
	
	Arr = (int *)malloc(sizeof(int)*iLength);
	
	printf("Enter the numbers\n ");
	
	for(int iCnt = 0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
    iRet = Addition(Arr,iLength);
	printf("Addition is: %d\n",iRet);
	
	free(Arr);
	
	return 0;
}














