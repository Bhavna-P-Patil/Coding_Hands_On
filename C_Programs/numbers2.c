// Accept 5 numbers and perform Addition of that numbers.

#include<stdio.h>

int main()
{
	int Arr[7];        //Array of 5 intergers     (Static memory Allocation)
	int iSum = 0;
	
	printf("Enter the numbers\n ");
	
	/*scanf("%d",&Arr[0]);
	scanf("%d",&Arr[1]);
	scanf("%d",&Arr[2]);
	scanf("%d",&Arr[3]);
	scanf("%d",&Arr[4]);*/
	
	for(int iCnt = 0; iCnt<5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	iSum = Arr[0] + Arr[1] + Arr[2] + Arr[3] + Arr[4];
	
	printf("Addition is: %d\n",iSum);
	
	return 0;
}