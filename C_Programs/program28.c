//Header file inclusion
#include<stdio.h>

// Function Declaration
void Display();

//Entry pint function
int main()
{
    int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	Display(iValue);    //Function call
	return 0;
}

//Function Defination
void Display(int iNo)
{
	//Local function
	int iDigit = 0;
	
	while(iNo>0)
	{
	iDigit = iNo % 10;       //1
	printf("%d\n",iDigit);     //1
	iNo = iNo/10;            //752
	}
	
}

































































