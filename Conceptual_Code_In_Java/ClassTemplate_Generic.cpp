#include<iostream>
using namespace std;

template<class T>
class Array	
{
	public:
	T *Arr;
	int size;           /// Don't convert it into T bcoz it is size
	
	Array(int);
	~Array();
	void Accept();
	void Display();
	T Maximum();
};	
	template<class T>
	Array<T> :: Array(int length)
	{
		size =length;
		Arr = new T[size];
	}
	template<class T>
	Array<T> :: ~Array()
	{
		delete []Arr;
	}
	template<class T>
	void Array<T> :: Accept()
	{
		int i = 0;
		cout<<"Enter the elements\n";
		for(i = 0; i < size; i++)
		{
			cin>>Arr[i];
		}
	}
	template<class T>
	void Array<T> :: Display()
	{
		int i = 0;
		cout<<"Elements are\n";
		for(i = 0; i < size; i++)
		{
			cout<<Arr[i]<<"\n";
		}
	}
	template<class T>
	T Array :: Maximum()
	{
		T Max = Arr[0];
		int i =0;
		for(i = 0; i < size; i++)
		{
			if(Arr[i] > Max)
			{
				Max = Arr[i];
			}
		}
		return Max;
		
	}


int main()
{
	Array <int>obj(5);
	obj.Accept();
	obj.Display();
	
	Array<char>obj2(4);
	obj2.Accept();
	obj2.Display();
     
    int iret = obj.Maximum();
    cout<<"MAx is : "<<iret<<"\n";	
	return 0;
}