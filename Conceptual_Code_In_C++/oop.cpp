#include<iostream>
using namespace std;

class Array
{
private:
   int *ptr;
   int size;

public:
   Array(int no = 5)
   {
	 cout<<"Constructor\n";
     size = no;
     ptr = new int[size];	 
   }
   ~Array()
   {
     cout<<"Destructor\n";
	 delete []ptr;
   }
   void Accept()
   {
	 int iCnt = 0;
     cout<<"Enter the element\n";
	 for(iCnt = 0; iCnt < size; iCnt++)
	 {
		 cin>>ptr[iCnt];
	 }	 
   }
   void Display()
   {
	   cout<<"Elements are\n";
	   int iCnt = 0;
	   for(iCnt = 0;iCnt<size; iCnt++)
	   {
		   cout<<ptr[iCnt]<<"\n";
	   }	   
      
   }	   
};

int main()
{
  int value = 0;	
  cout<<"Inside main\n";
  cout<<"Enter number of elments:\n";
  cin>>value;
  Array *obj = NULL;
  obj = new Array(value);
  obj->Accept();
  obj->Display();
  delete obj;
  return 0;
}  