//Header file inclusion
#include<stdio.h>

// Function Declaration
void Display();

//Entry pint function
int main()
{

	Display();    //Function call
	return 0;
}

//Function Defination
void Display()
{
	//Local function
	int iNo = 7521;
	int iDigit = 0;
	
	iDigit = iNo % 10;       //1
	printf("%d\n",iDigit);     //1
	iNo = iNo/10;            //752
	
	iDigit = iNo % 10;       //1
	printf("%d\n",iDigit);     //1
	iNo = iNo/10;    
	
	iDigit = iNo % 10;       //1
	printf("%d\n",iDigit);     //1
	iNo = iNo/10;    
	
	iDigit = iNo % 10;       //1
	printf("%d\n",iDigit);     //1
	iNo = iNo/10;    
	
}

































































