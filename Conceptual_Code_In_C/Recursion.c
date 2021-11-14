#include<stdio.h>

int PowerI(int x, int y)
{
	int iMult = 1;
	 
	 while(y != 0)
	 {
		 iMult = iMult * x;
		 y--;
	 }
	 return iMult;
}

int main()
{
	int no1 = 0, no2 =0 , iret=0;
	
	printf("Enter base\n");
	scanf("%d",&no1);
	
	printf("Enter power\n");
	scanf("%d",&no2);
	
	iret = PowerI(no1,no2);
	
	printf("REsult is : %d\n",iret);
	
	return 0;
}