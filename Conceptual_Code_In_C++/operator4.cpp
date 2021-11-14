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
	void Display()
	{
		cout<<i<<"\t"<<j<<endl;
	}
	friend Demo operator ++ (Demo&);
};

Demo operator ++ (Demo& op)
{
	op.i++;
	op.j++;
	return op;
}
int main()
{
	Demo obj1(10,20);
	Demo ret1(0,0);
	
	Demo obj2(10,20);
	Demo ret2(0,0);
    
	ret1 = ++obj1;
	ret1.Display();
	obj1.Display();
	/*
	ret2 = obj2++;
	ret2.Display();*/
	return 0;
}















































