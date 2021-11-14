#include<stdio.h>

struct Demo
{
	int no;
	float f;
};

int main()
{
	struct Demo obj[3];
	obj[0].no = 11;
	obj[0].f = 10.5;
	
	obj[1].no = 21;
	obj[1].f = 12.5;
	
	obj[2].no = 31;
	obj[2].f = 14.5;
	
	printf("%d",sizeof(obj[1]));
	printf("%d",sizeof(obj[2].no));
	
	return 0;
}	