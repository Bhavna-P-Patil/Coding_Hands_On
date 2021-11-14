// Input : 5
// Output :1  2  3  4  5

#include<stdio.h>

void Display(int iNo)
{
	int iCnt =0;
	char ch = '\0';
	for(iCnt = 1, ch ='a'; iCnt <=iNo ; iCnt++,ch++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}

int main()
{
	int iValue = 0;
	printf("Enter the number : ");
	scanf("%d",&iValue);
	Display(iValue);
	
	return 0;
}
    