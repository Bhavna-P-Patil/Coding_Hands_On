#include<stdio.h>

int Add(int ino1,int ino2)
{
	return ino1+ino2;
}
int Sub(int ino1,int ino2)
{
	return ino1-ino2;
}
int Mul(int ino1,int ino2)
{
	return ino1*ino2;
}
int main()
{
	int iret = 0;
	
	//int Add(int ino1,int ino2)
	int(*fp)(int,int);
	fp=Add;
	iret = fp(20,10);
	printf("Addition is:%d\n",iret);
	fp=Sub;
	iret = fp(20,10);
	printf("Substraction is:%d\n",iret);
	fp=Mul;
	iret = fp(20,10);
	printf("Multiplication is:%d\n",iret);
	
	
	return 0;
}