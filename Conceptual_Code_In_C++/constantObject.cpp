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
};
int main()
{
Demo dobj1(10,20);
const Demo dobj2(10,20);
dobj1.i++;
//dobj2.i++;      //Error bcoz dobj2 is contant object

return 0;
}	