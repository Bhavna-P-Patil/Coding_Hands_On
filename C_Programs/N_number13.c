// Accept N numbers and 1 number and return FirstOcurrence index number of that number;
////////////////////////////////HEADER_FILES///////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////HELPER_FUNCTION////////////////////////////////////////////

int FirstOcurrence(int Arr[], int iSize, int iNo)
{
	int i =0;
	for(i =0; i < iSize; i++)
	{
		if(Arr[i] == iNo)
		{break;}
	}
	////Loop Ends
	if(i == iSize)
	{
		return -1;
	}
	else
	{
		return i;
	}
}

/////////////////////////////ENTRY_POINT_FUNCTION////////////////////////////////////////////
int main()
{
	int iLength = 0,i=0,iValue=0;
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
	printf("Enter the elements to search\n");
	scanf("%d",&iValue);
	iRet = FirstOcurrence(ptr, iLength,iValue);
	if(iRet == -1)
	{
		printf("There is no such number\n");
	}
	else
	{
		printf("Number is there at index : %d\n",iRet);
	}
	 
	free(ptr);
	
	return 0;
}
