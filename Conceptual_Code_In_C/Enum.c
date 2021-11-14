#include<stdio.h>

int main()
{
	enum Days {Mon = 1,Tue,Wed,Thu,Fri,Sat,Sun};
	
	printf("%d\n",Mon);
	printf("%d\n",Tue);
	printf("%d\n",Wed);
	printf("%d\n",Thu);
	/*
	switch(choice)
	{
		case Mon:
	}
	*/
	enum Days obj = Wed;
	
	printf("%d\n",obj);
	
	printf("Size of enum object %d \n",sizeof(obj));
	
	enum result {false, true};
	
	enum gender {Male, Female};
	
	return 0;
}