#include<iostream>
using namespace std;

class Base
{
	public:
      const int x=2;
	  Base()
	  {
		  cout<<"Base constructor\n";
		  cout<<"x is:"<<x<<"\n";
	  } 
	  void fun()
	  {
		  cout<<"Inside fun\n";
	  }
};
int main()
{
Base bobj;
return 0;
}	