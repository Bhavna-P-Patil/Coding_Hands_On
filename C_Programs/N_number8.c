// Accept N number from user and return difrrnce betweem maximum and minimum number

#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[], int iSize)
{
	int iMin =Arr[0],i=0,iMax = Arr[0];
	
	for(i = 0; i < iSize; i++)
	{
		if(Arr[i] > iMax)
		{
			iMax = Arr[i];
		}
		else if(Arr[i] < iMin)
		{
			iMin = Arr[i];
		}
	}
	return (iMax - iMin);
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
	
	iRet = Diffrence(ptr, iLength);
	
	printf("Diffrence is :%d\n",iRet); 
	free(ptr);
	
	return 0;
}