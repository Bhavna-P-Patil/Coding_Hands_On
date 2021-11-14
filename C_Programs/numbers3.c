

#include<stdio.h>

int main()
{
	int Arr[5];        //Array of 5 intergers     (Static memory Allocation)
	int iSum = 0;
	
	printf("Enter the numbers\n ");
	
	for(int iCnt = 0; iCnt<5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	 for(int iCnt = 0; iCnt<5; iCnt++)
	 {
		 iSum += Arr[iCnt];
	 }
	printf("Addition is: %d\n",iSum);
	
	return 0;
}