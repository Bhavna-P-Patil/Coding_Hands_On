// It is used to include the header file
#include<stdio.h>

struct Demo
{
	int no;
	int arr[4];
	float f;
};

int main()
{
   struct Demo obj1;
   obj1.no = 11;
   obj1.f = 3.14;
   obj1.arr[0] = 10; 
   obj1.arr[1] = 20; 
   obj1.arr[2] = 30; 
   obj1.arr[3] = 40;  

   printf("%d",sizeof(obj1));

   return 0;
}   
