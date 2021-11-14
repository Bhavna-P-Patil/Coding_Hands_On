#include<stdio.h>
//#include<stdiolib.h>
int main()
{
	int iSize=0;
	int *ptr = NULL;
	
	//Step 1: Ask the user about the size
	printf("How many elements?\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize *sizeof(int));
	
	//Step 3: Use the memory
	
	//step 4:Deallocation the memory
	//free(ptr);
	return 0;
}