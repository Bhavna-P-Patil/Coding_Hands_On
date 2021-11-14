#include<iostream>
using namespace std;

class Base
{
	public:
	  int x,y;
	  virtual void fun()
	  {
		  cout<<"Base fun\n";
	  }	
      virtual void gun()
	  {
		  cout<<"Base gun\n";
	  }	
      virtual void sun()
	  {
		  cout<<"Base sun\n";
	  }		
};
class Derived : public Base
{
public:
  int i,j;
  void gun()
	  {
		  cout<<"Derived gun\n";
	  }	
  virtual void run()
	  {
		  cout<<"Derived run\n";
	  }		  
};

int main()
{
	cout<<"Size of Base:"<<sizeof(Base)<<endl;
	cout<<"Size of Derived:"<<sizeof(Derived)<<endl;
	Base *bp = new Derived();
	bp->fun();
	bp->gun();
	bp->sun();
	return 0;
}	
	  