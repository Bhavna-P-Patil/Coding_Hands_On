# include<iostream>
using namespace std;

class Demo
{
private:
	int i,j;
public:		
	Demo(int x = 10, int y = 20)
	{
		i=x;
		j=y;
	}
	friend Demo operator -(Demo);
};

//Return_value operator symbol (parameters)
void Display()
{
   Demo operator -(Demo op)
   {
	   return Demo(-op.i,-op.j);
   }
}
int main()
{
	Demo obj1(11,21);
	Demo obj2(7,5);
	
	Demo ret(0,0);
    
	ret = -obj1;
	ret.Display();
	return 0;
}















































