#include<iostream>
using namespace std;

int main()
{
	int i = 10,j = 10;
	int x,y;
	
	x = i--;          //Post increment
	 
	y = --j;          //Pre increment
	
	cout<<x<<endl;     //10
	cout<<y<<endl;     //9
	
	cout<<i<<endl;      //9
	cout<<j<<endl;      //9
	return 0;
}