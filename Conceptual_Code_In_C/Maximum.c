#include<stdio.h>

int Maximum(int ino1,int ino2)
{
   if(ino1>ino2)
   {
	   return ino1;
   }
   else
   {
       return ino2;
   }	   
}
int main()
{
	auto int ivalue1 = 0,ivalue2=0, iret = 0;
	
	printf("Enter the 1st number\n");
	scanf("%d",&ivalue1);
	
	printf("Enter the 2nd number\n");
	scanf("%d",&ivalue2);
	
	iret = Maximum(ivalue1,ivalue2);
	printf("Maximum number is:%d\n",iret);
	
    return 0;
}