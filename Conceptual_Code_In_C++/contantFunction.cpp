#include<iostream>
using namespace std;

class Demo
{
	public:
      int i;
	  int j;                 
	  
	  Demo()                  
	  {
		  i=0; j=0;
		  cout<<"Default\n";
      }		
	  Demo(int x, int y)      
	  {
		  i=x; j=y;
		  cout<<"Parameterized\n";
	  }	 
      void fun(int a)                        // void fun(Demo* const this)
	  {
         i++;
         j++;
      }
      void gun(int a,const int b)const        //void gun(const Demo * const this) 
	  {
		  int no = 10;
		  const int x=20;
		  a++;
		  //b++;    Error
		  //x++;    Error
		  no++;
          //i++;j++;  Error
      }		 
};
int main()
{
const Demo dobj(10,20);
//dobj.fun(11);         //fun(&dobj1,11)
dobj.gun(11,21);      //gun(&dobj1,11)
Demo dobj2(10,20);
dobj2.fun(11);      //fun(&dobj2,11);
dobj2.gun(11,21);    //gun(&dobj2,11);   return 0;
return 0;
}	