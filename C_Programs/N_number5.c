// Accept N numbers and count grater than 10 and smaller than 20.


#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iSize)
{
	int iCnt =0,i=0;
	
	for(i = 0; i < iSize; i++)
	{
		if((Arr[i] > 10) && (Arr[i] < 20))
		{
			iCnt++;
		}
	}
	return iCnt++;
}

int main()
{
	int iLength = 0,i=0;
	int *ptr = NULL;
	int iRet = 0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int)*iLength);
	
	printf("Enter elements: \n");
	for(i =0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet = Range(ptr, iLength);
	
	printf("Average is :%d\n",iRet); 
	free(ptr);
	
	return 0;
}