#include<stdio.h>



struct Demo
{
	int x;
	int y;
	struct Hello
    {
	 int i;
	 double d;
    };
};

int main()
{
	struct Demo obj;
	obj.x = 10;
	obj.y = 20;
	//obj.hobj.i = 11;
	//obj.hobj.d = 3.14;
	
	printf("%d",sizeof(obj));
	//printf("%d",sizeof(obj.hobj.i));
	
	
	return 0;
}	