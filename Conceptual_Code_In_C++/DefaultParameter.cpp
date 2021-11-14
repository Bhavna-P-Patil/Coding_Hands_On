#include<iostream>
using namespace std;

class Demo
{
	public:
	float Area(float fRadius, float fPI = 3.14)
	{
		float fAns = 0.0;
		fAns = fPI * fRadius*fRadius;
		return fAns;
	}
};
	
int main()
{
	float fValue1 = 0.0, fValue2 = 0.0, fRet = 0.0;
	cout<<"Enter radius\n";
	cin>>fValue1;
	
	cout<<"Enter the value of PI\n";
	cin>>fValue2;
	
	Demo obj;                         //
	
	fRet = obj.Area(fValue1,fValue2);
	cout<<"Area of Circle is :"<<fRet;
    return 0;
}