#include<iostream>
using namespace std;

class Base1
{
	public:
      int x,y;
	  Base1()
	  {
		  cout<<"Base1 constructor\n";
	  }
      ~Base1()
      {
          cout<<"Base1 destructor\n";
      }		  
	  void fun()
	  {
		  cout<<"Inside fun\n";
	  }
};
class Base2
{
	public:
      int x,y;
	  Base2()
	  {
		  cout<<"Base2 constructor\n";
	  }
      ~Base2()
      {
          cout<<"Base2 destructor\n";
      }		  
	  void fun()
	  {
		  cout<<"Inside fun\n";
	  }
};
class Derived:public Base1,Base2             // multiple inheritance
{
    public:
       int data;
       Derived()
	  {
		  cout<<"Derived constructor\n";
	  }
      ~Derived()
      {
          cout<<"Derived destructor\n";
      }		  
       void gun()
       {
          cout<<"Inside gun\n";
       }
};

int main()
{
Derived dobj;
return 0;
}	