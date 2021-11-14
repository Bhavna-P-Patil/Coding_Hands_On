#include<iostream>
using namespace std;

class Demo
{
	public:
	float Area(float fRadius, float fPI = 3.14) // float fPI = 3.14 is default_argument
	{
		float fAns = 0.0;
		fAns = fPI * fRadius*fRadius;
		return fAns;
	}
};
	
int main()
{
	auto float fValue1 = 0.0, fValue2 = 0.0, fRet = 0.0;
	cout<<"Enter radius\n";
	cin>>fValue1;
	
	cout<<"Enter the value of PI\n";
	cin>>fValue2;
	
	Demo obj;                         //
	
	fRet = obj.Area(fValue1,fValue2);
	cout<<"Area of Circle is :"<<fRet;
    fRet = obj.Area(fValue1):
	cout<<"Area of circle is:"<<fRet<<"\n";
     
    cout<<"Size of object is:"<<sizeof(obj)<<"\n";       	 
	
	return 0;
	
}








