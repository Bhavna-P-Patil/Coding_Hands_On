#include <iostream>
using namespace std;

class Demo
{
public:
    int x,y;
    Demo(int a, int b)
    {
        x = a;
        y = b;
    }
};

int main()
{
    Demo dobj(10,20);
    
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    
    dobj.x = 11;
    dobj.y = 21;
    
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    return 0;
}
